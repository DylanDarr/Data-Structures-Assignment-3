#include "Queue.cpp"
#include "Functions.h"


int main()
{
    cout << "Queue instantiated: " << endl;
    Queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    q.push(9);
    q.push(10);
    q.printQueue();
    cout << "Move to rear: " << endl;
    q.move_to_rear();
    q.printQueue();



    cout << endl << endl << "List instantiated: " << endl;
    List list;
    list.print();

    cout << endl << "Search for last occurence of 9:  9 is at index -> " << list.linearSearch(9, list.size() - 1) << endl << endl;

    cout << "Insertion Sort: " << endl;
    list.insertionSort();
    list.print();


}
