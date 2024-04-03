#pragma once
#include <iostream>

using namespace std;

template <typename D>
struct Node {
	Node* next;
	D data;

};

template <typename D>
class Queue {

private:
	Node<D>* head = nullptr;
	Node<D>* tail = nullptr;
	int queueCount = 0;

public:

	// Constructor
	Queue() {};

	// Pushes to the back of the queue
	void push(D data);

	// Pops the front of the queue
	void pop();

	// Returns the front of the queue
	D front();

	// return the back of the queue
	D back();

	// Checks if queue is empty
	bool empty();

	// Gets the size of the queue
	int size();			

	// Prints the queue
	void printQueue();

	// Pops the front of the queue and moves it to the back
	void move_to_rear();

};
