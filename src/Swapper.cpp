#include <iostream>
#include "Header.h"

void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;

	std::cout << "Swapped numbers:" << '\n';
	std::cout << "a:" << a << '\n';
	std::cout << "b:" << b << '\n';
}
