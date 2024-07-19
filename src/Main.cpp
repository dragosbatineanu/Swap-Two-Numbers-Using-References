#include <iostream>
#include "Header.h"

int main() {

	int a = 0;
	int b = 0;

	std::cout << "Enter two integers" << std::endl;
	std::cin >> a;
	std::cin >> b;

	swap(a, b);
}