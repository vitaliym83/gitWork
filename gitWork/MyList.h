#pragma once
#include <list>
#include <ostream>

template <typename T>
class MyList
{
protected:
	std::list<T> list;
public:
	MyList(){}

	void push_back(T val) {
		list.push_back(val);
	}

	void push_front(T val) {
		list.push_front(val);
	}
	std::list<T> getList() {
		return list;
	}
	
	friend std::ostream& operator << (std::ostream& out, MyList<T>& my_list) {

		for (auto i : my_list.getList())
			out << i << ".";

		return out;
	}

	~MyList(){}
};

