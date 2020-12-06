// HelloWorld.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    //actually using "\n" is more efficient
    std::cout << "Hello World!\n";
    std::cout << "My Name is Bowen" << std::endl;
    std::cout << "Please enter a number: ";
    //variables should always be initialized
    int x{0};
    for (x < 10; x++) {
        std::cout << "x <10";
    };
    std::cout << x;
    std::cin >> x;
    std::cout << "You entered " << x << '\n';
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files,
//      or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
