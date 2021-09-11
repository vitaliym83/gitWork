// gitWork.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include "MyList.h"
int main()
{
	MyList<int> ml;

	ml.push_back(3);
	ml.push_back(2);
	ml.push_back(1);

	std::cin >> ml;

	std::cout << ml << "\n";
	std::cout << ml.sum() << "\n";
	std::cout << ml.sum(1) << "\n";
}
