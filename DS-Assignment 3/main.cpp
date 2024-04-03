#include "Queue.h"
#include "Functions.h"


int main()
{
    List list;
    list.print();
    
    cout << "Search for 9: " << list.linearSearch(9, list.size()-1) << endl;

    list.insertionSort();
    list.print();


    //Make Queue a template class that works

}
