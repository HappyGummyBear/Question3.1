#include "LinkedStack.h"

Node::Node() {}
Node::Node(const int& d) {
	data = d; // Store the info to the data variable
}

Stack::Stack() {
	topOfStack = bottomOfStack = nullptr; // Point the pointers to nullptr
}


void Stack::push(const int& d) {
	Node* temp = new Node(d); // Put int into a node
	if (topOfStack == nullptr) { // If list is empty then make temp head and tail
		topOfStack = temp;
		bottomOfStack = temp;
	}
	else { // Point temp to top node, then top pointer points to temp
		temp->next = topOfStack;
		topOfStack = temp;
	}
}
void Stack::pop() { // Remove top object in the stack
	int data; // Variable to hold data in the top node
	Node* temp = topOfStack; // Temp object to hold onto top node so it is not lost
	data = temp->data; // Copy data from the top node
	topOfStack = topOfStack->next; // Point top to the next node
	delete temp; // Delete what temp points to
	std::cout << data << " "; // Print out data from deleted node
}
void Stack::printStack() {
	Node* current = topOfStack; // Point to the top of the stack
	while (current != nullptr) { // While current points to a node keep running
		std::cout << current->data; // Print data to console
		current = current->next; // Make current point to next node on the stack
	}
}

void Stack::popPrint() {
	while (topOfStack != nullptr) { // While there is an object in the stack keep traversing
		pop(); // Pop from the stack and print to console
	}
	std::cout << std::endl;
	std::cout << "Stack is empty" << std::endl;
}