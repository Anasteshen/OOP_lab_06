#include<iostream>
#include "ListItems.h"
#include "List.h"

using namespace std;



int  main()
{
	List<int> *list = new List<int>();
	int item;
	int size;

	item = 1;
	list->Push(item);

	item = 2;
	list->Push(item);

	item = 3;
	list->Push(item);

	item = 4;
	list->Push(item);

	item = 5;
	list->Push(item);

	item = 6;
	list->Push(item);

	size = 4;
	list->Cout(size);
	system("pause");
	return 0;
}