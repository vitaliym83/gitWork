#pragma once
#include "MyList.h"
template<typename T>
class MyList_Decor :
	public MyList<T>
{
public:
	MyList_Decor(){}

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
	int count_of_val( T val, int start_index=1, int end_index=4) {
		int count=0;
		for (int i = start_index; i < end_index;i++) {
			if (i == val)
				count++;
			
		}return count;
	}

	T mult() {
		return std::accumulate(this->list.begin(), this->list.end(),2,std::multiplies<int>());
	}


	
	~MyList_Decor(){}
};

