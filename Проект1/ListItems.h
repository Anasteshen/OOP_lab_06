#pragma once
template <typename T> class ListItem
{
private:
	T item;
	ListItem <T> *next;
public:
	ListItem();
	ListItem(T item, ListItem<T> *next);
	~ListItem();
	void SetNext(ListItem<T>* next);
	ListItem<T>* GetNext() const;
	const T GetItem() const;
};

template <typename T> ListItem<T>::ListItem()
{
}

template <typename T> ListItem<T>::ListItem(T item, ListItem<T> *next)
{
	this->item = item;
	this->next = next;
}

template <typename T> ListItem<T>::~ListItem()
{
}
template<typename T> void ListItem<T>::SetNext(ListItem<T>* next)
{
	this->next = next;
}
template<typename T> ListItem<T>* ListItem<T>::GetNext() const
{
	return this->next;
}
template<typename T> const T ListItem<T>::GetItem() const
{
	return this->item;
}