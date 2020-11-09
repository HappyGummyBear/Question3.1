#pragma once
#include <iostream>
#include <string>

class Node { // Node object to hold pushed data
public:
	int data; // Inintialized variable to hold the data being stored
	Node* next; // Pointer to next object

	Node(); // Constructors
	Node(const int& d);
};

class Stack { // Stack object
public:
	Node* topOfStack; // Pointer to top of the stack
	Node* bottomOfStack; // Pointer to the bottom of the stack

	Stack(); // Constructors
	Stack(const std::string& d);

	void push(const int& d); // Fuction to add to the stack
	void pop(); // Remove object from top of the stack
	void printStack(); // Print the stack from top to bottom
	void popPrint();
};