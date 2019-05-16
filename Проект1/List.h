#pragma once
#include "ListItems.h"

using namespace std;

template <typename T> class List
{
private:
	ListItem <T> *first;
	ListItem <T> *last;
	int size;
public:
	List();
	List(ListItem<T> *first, ListItem<T> *last);
	~List();

	const T GetSize() const;
	void Push(T item);
	T Min();
	T Max();
	void Cout(int size);
};

template<typename T>  List<T>::List()
{
}
template<typename T> List<T>::List(ListItem <T> *first, ListItem <T> *last)
{
	cin >> "template<typename T> List<T>::List(ListItem <T> *first,ListItem <T> *last)";
	this->first = first;
	this->last = last;
}

template<typename T> List<T>::~List()
{
}
template<typename T> const T List<T>::GetSize() const
{
	return this->size;
}


template<typename T> void List<T>::Push(T value)
{
	ListItem<T> * list = new ListItem<T>(value, 0);
	if (this->first == NULL)
	{
		this->first = list;
		this->last->SetNext(list);
		list->SetNext(last);
	}
	else
	{
		this->last->SetNext(list);
		list->SetNext(first);
	}
	this->last = list;
	this->size += 1;
}
template<typename T> T List<T>::Min()
{
	ListItem<T> *temp;
	temp = first->next;
	T min = first->item;
	while (temp != first)
	{
		if (min > temp->item)
		{
			min = temp->item;
		}
		temp = temp->next;
	}
	return min;
}

template<typename T> T List<T>::Max()
{
	ListItem<T> *temp;
	temp = first->next;
	T max = first->item;
	while (temp != first)
	{
		if (max < temp->item)
		{
			max = temp->item;
		}
		temp = temp->next;
	}
	return max;
}
template<typename T> void List<T>::Cout(int size)
{
	ListItem<T> *temp;
	temp = first;
	for (int i = 0; i < size; i++)
	{
		cout << temp->GetItem() << endl;
		temp = temp->GetNext();
	}
}
