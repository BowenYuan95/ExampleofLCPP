#include <iostream>

int main() 
{
	std::cout << "Enter an integer: ";

	int num{ 0 };
	std::cin >> num;

	int doubleNum{ num * 2 };
	std::cout << "Double that number is " << doubleNum << '\n';

	return 0;
}