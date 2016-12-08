#pragma once
template<class dataObj>
class Data
{
public:
	Data();
	~Data();

	Data * getNext();
	Data * getPrev();
	void setNext(Data *);
	void setPrev(Data *);

	dataObj getValue();
	void setValue(dataObj);

private:
	dataObj value;
	Data * nextData;
	Data * prevData;
};

template<class dataObj>
inline Data<dataObj>::Data()
{
}

template<class dataObj>
inline Data<dataObj>::~Data()
{
}

template<class dataObj>
inline Data<dataObj> * Data<dataObj>::getNext()
{
	return nextData;
}

template<class dataObj>
inline Data<dataObj> * Data<dataObj>::getPrev()
{
	return prevData;
}




template<class dataObj>
inline void Data<dataObj>::setNext(Data * dataInput)
{
	nextData = dataInput;
}
template<class dataObj>
inline void Data<dataObj>::setPrev(Data * dataInput)
{
	prevData = dataInput;
}
template<class dataObj>
inline dataObj Data<dataObj>::getValue()
{
	return value;
}

template<class dataObj>
inline void Data<dataObj>::setValue(dataObj v)
{
	value = v;
}


