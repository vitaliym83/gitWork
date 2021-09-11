#pragma once
#include <list>
#include <ostream>
#include <istream>
#include <algorithm>
#include <functional>
#include <numeric>

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

	friend std::istream& operator >> (std::istream& in, MyList<T>& my_list) {

		T * val = new T;
		in >> *val;
		my_list.push_back(*val);
		delete val;

		return in;
	}

	T sum(int start_index = 0){
		return std::accumulate(this->list.begin(), this->list.end(), start_index);
	}


	~MyList(){}
};

