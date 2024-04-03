#include "Functions.h"

List::List() {

	list.push_back(3);
	list.push_back(7);
	list.push_back(5);
	list.push_back(9);
	list.push_back(1);
	list.push_back(4);
	list.push_back(8);
	list.push_back(9);
	list.push_back(2);
}

void List::print() {

	for (auto i : list) {
		cout << i << endl;
	}
}

size_t List::size() {
	return list.size();
}

int List::linearSearch(int target, int pos_last) {

	if (pos_last == 0)
		return -1;

	if (target == list[pos_last])
		return pos_last;

	else
		return linearSearch( target, pos_last - 1);
}

void List::insertionSort() {

	int i, j, key;

	bool insertionNeeded = false;
	for (j = 1; j < list.size(); j++) {
		
		key = list[j];
		insertionNeeded = false;
		for (i = j - 1; i >= 0; i--) {
			
			if (key < list[i]) {
				
				list[i + 1] = list[i];
				insertionNeeded = true;
			}
			
			else
				break;
		}
		
		if (insertionNeeded)
			list[i + 1] = key;
	}
}