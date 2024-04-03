#pragma once
#include <vector>
#include <iostream>

using namespace std;

class List {

private:
	vector<int> list;

public:
	//Constructor
	List();

	//Returns size of list
	size_t size();

	//Uses a linear search algorithm to find the target from the given index
	int linearSearch(int target, int pos_last);

	//Sorts the list with the insertion sort algorithm
	void insertionSort();

	//Prints the list to console
	void print();
};