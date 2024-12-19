#include <iostream>
#include "LinkedList.h"
#include "Queue.h"
using namespace std;

int main()
{
	LinkedList<int>* l1 = new LinkedList<int>();
	l1->InsertAtBeginning(MyValue<int>(0));
	l1->InsertAtEnd(MyValue<int>(1));
	l1->DeleteAtBeginning();
	cout << l1->GetSize() << ". ";


	Queue<string>* q1 = new Queue<string>();
	q1->Enqueue(MyValue<string>("Hello world!"));
	cout << q1->GetFirst().GetValue() << endl;
	q1->Dequeue();

	delete l1;
	delete q1;
}