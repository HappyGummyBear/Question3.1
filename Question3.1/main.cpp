#include "ArrayStack.h"
#include "LinkedStack.h"
#include <time.h>
#include <chrono>

int main() {
	int size = 10000000;
	StackArray array = StackArray();
	Stack list = Stack();

	// Time Array Stack
	auto begin = std::chrono::steady_clock::now();
	for (int i = 0; i < size; i++) {
		array.push(i);
	}
	auto end = std::chrono::steady_clock::now();
	auto length = std::chrono::duration_cast<std::chrono::milliseconds>(end - begin).count();
	std::cout << "Array stack toke: " << length << " ms" << std::endl;

	std::cout << std::endl;

	// Time Linked List Stack
	begin = std::chrono::steady_clock::now();
	for (int i = 0; i < size; i++) {
		list.push(i);
	}
	end = std::chrono::steady_clock::now();
	length = std::chrono::duration_cast<std::chrono::milliseconds>(end - begin).count();
	std::cout << "List stack toke: " << length << " ms" << std::endl;
	return 0;
}
