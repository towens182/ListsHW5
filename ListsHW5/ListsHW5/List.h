#pragma once
#include "Data.h"

template <class datatype>
class List
{
public:
	List<datatype>();
	~List<datatype>();

	void addInOrder(datatype input);
	void addFirst(datatype input);
	void addLast(datatype input);
	void outputList();
	
private:
	 Data<datatype> * listhead;
};

template<class datatype>
inline List<datatype>::List()
{
	listhead = NULL;
}

template<class datatype>
inline List<datatype>::~List()
{
}

template<class datatype>
inline void List<datatype>::addInOrder(datatype input)
{
	if (listhead == NULL)
	{
		addFirst(input);
	}
	else
	{
		Data<datatype> * nextData = listhead;
		Data<datatype> * prevData = NULL;
		while (nextData != NULL)
		{
			prevData = nextData;
			nextData = prevData->getNext();
			if (nextData == NULL)
			{
				if (input < prevData->getValue())
				{
					break;
				}
				addLast(input);
				return;
			}
			if (input < nextData->getValue())
			{
				break;
			}
		}

		Data<datatype> * newData = new Data<datatype>();
		newData->setValue(input);
		if (prevData == listhead)
		{
			addFirst(input);
		}
		else
		{
			newData->setNext(nextData);
			prevData->setNext(newData);
		}
	}
	return;
}

template<class datatype>
inline void List<datatype>::addFirst(datatype input)
{
	Data<datatype> * newData = new Data<datatype>();
	newData->setValue(input);
	newData->setNext(listhead);
	listhead = newData;
}
template<class datatype>
inline void List<datatype>::addLast(datatype input)
{
	if (listhead == NULL)
	{
		addFirst(input);
	}
	else
	{
		Data<datatype> * newData = new Data<datatype>();
		newData->setValue(input);
		Data<datatype> * data = listhead;
		Data<datatype> * lastData = NULL;
		while (data != NULL)
		{
			lastData = data;
			data = data->getNext();
		}
		lastData->setNext(newData);
		newData->setNext(NULL);
	}
}
template<class datatype>
inline void List<datatype>::outputList()
{
	while (listhead != NULL)
	{
		std::cout << listhead->getValue() << "\n";
		listhead = listhead->getNext();
	}
}
