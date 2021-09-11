#pragma once
#include <list>
template <typename T>
class MyList : public std::list<T>
{
public:
	MyList();

	void push_back(T val) {
		this->push_back(val);
	}

	void push_front(T val) {
		this->push_front(val);
	}

	~MyList();
};

