// Chapter4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

double getDouble()
{
    std::cout << "Enter a doule value:";
    double x{};
    std::cin >> x;
    return x;
}

char getOperator()
{
    std::cout << "Enter one of the following: +. -, *, or /:";
    char operation{};
    std::cin >> operation;
    return operation;
}

void printResult(double x,double y, char operation) 
{
    if (operation == '+')
        std::cout << x << "+" << y << "is" << x + y << '\n';
    else if (operation == '-')
        std::cout << x << "-" << y << "is" << x - y << '\n';
    else if (operation == '*')
        std::cout << x << "*" << y << "is" << x * y << '\n';
    else if (operation == '/')
        std::cout << x << "/" << y << "is" << x / y << '\n';

}
int main()
{
    double x{ getDouble() };
    double y{ getDouble() };

    char operation{ getOperator() };

    printResult(x, operation, y);

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
