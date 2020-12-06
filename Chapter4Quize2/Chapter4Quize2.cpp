// Chapter4Quize2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "constants.h"

double getTowerHeight()
{
    std::cout << "Enter the height of the tower in meters:";
    double towerHeight{};
    std::cin >> towerHeight;
    return towerHeight;
}

double calculateHeight(double towerHeight, int seconds)
{
    double distanceFallen{ (gravity * (seconds * seconds)) / 2.0 };
    double currentHeight{ towerHeight - distanceFallen };

    return currentHeight;
}

void printHeight(double height, int seconds)
{
    if (height > 0.0)
        std::cout << "At " << seconds << "seconds, the ball is at height:" << height << "meters\n";
    else
        std::cout << "At" << seconds << "seconds, the ball is on the ground.\n";
}

void calculateAndPrintHeight(double towerHeight, int seconds)
{
    double height{ calculateHeight(towerHeight, seconds) };
    printHeight(height, seconds);
}

int main()
{
    //getTowerHeight();
    //calculateHeight();
    //printHeight();
    //calculateAndPrintHeight();

    const double towerHeight{ getTowerHeight() };
    calculateAndPrintHeight(towerHeight, 0);
    calculateAndPrintHeight(towerHeight, 1);
    calculateAndPrintHeight(towerHeight, 2);
    calculateAndPrintHeight(towerHeight, 3);
    calculateAndPrintHeight(towerHeight, 4);
    calculateAndPrintHeight(towerHeight, 5);

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
