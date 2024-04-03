#pragma once
#include <vector>
#include <iostream>

using namespace std;

class List {

private:
	vector<int> list;

public:
	List();
	size_t size();
	int linearSearch(int target, int pos_first);
	void insertionSort();
	void print();
};