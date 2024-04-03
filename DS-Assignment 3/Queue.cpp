#include "Queue.h"




template <typename D>
void Queue<D>::push(D data) {

	if (empty() == true) {
		Node* newNode = new Node(data);
		head = newNode;
		tail = newNode;
		queueCount++;
	}
	else {
		Node* newNode = new Node(data);
		tail->next = newNode;
		tail = newNode;
		tail->next = nullptr;
		queueCount++;
	}

}

template <typename D>
void Queue<D>::pop() {
	if (empty() == false) {
		if (head->next == nullptr) {
			delete head;
			queueCount--;
		}
		else {
			Node* oldTop = head;
			head = head->next;
			delete oldTop;
			queueCount--;
		}
	}
	else
		cout << endl << "Can not pop because queue is empty" << endl << endl;
}

template <typename D>
D Queue<D>::front() {
	return(head->data);
}

template <typename D>
D Queue<D>::back() {
	return(tail->data);
}

template <typename D>
bool Queue<D>::empty() {
	if (queueCount == 0)
		return (true);
	return(false);
}

template <typename D>
int Queue<D>::size() {
	return(queueCount);
}

template <typename D>
void Queue<D>::printQueue() {
	cout << endl;
	if (empty() == false) {
		Node* tempNode = head;
		cout << head->data;
		for (int i = 1; i < queueCount; i++) {
			tempNode = tempNode->next;
			cout << " -> " << tempNode->data;
		}
		cout << endl << endl;
	}
}

template <typename D>
void Queue<D>::move_to_rear() {

	Node* frontNode = front();
	push(frontNode);
	pop();

}


