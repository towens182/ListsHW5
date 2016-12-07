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

private:
	 datatype * listhead;





};

template<class datatype>
inline List<datatype>::List()
{
	listhead == NULL;
}

template<class datatype>
inline List<datatype>::~List()
{
}

template<class datatype>
inline void List<datatype>::addInOrder(datatype input)
{
	if (listHead == NULL)
	{
		addFirst(val);
	}
	else
	{
		Data * nextData = listHead;
		Data * prevData = NULL;						//while loop must execute at least once
		while (nextData != NULL)
		{
			prevData = nextData;					//points to current element
			nextData = prevData->getNext();
			if (nextData == NULL)
			{
				if (val < prevData->getValue())
				{
					break;
				}
				addLast(val);
				return;
			}
			if (val < nextData->getValue())
			{
				break;
			}
		}

		Data * newData = new Data();
		newData->setValue(val);
		if (prevData == listHead)
		{
			addFirst(val);
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
	Data * newData = new Data();
	newData->setValue(val);
	newData->setNext(listHead);
	listHead = newData;
}
