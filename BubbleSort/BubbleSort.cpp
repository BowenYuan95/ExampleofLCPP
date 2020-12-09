// BubbleSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
#include <iterator>

int main()
{
    int array[]{ 6,3,2,9,7,1,5,4,8 };
    constexpr int Length{ static_cast<int>(std::size(array)) };

    bool swapped{ false };

    for (int iteration{ 0 }; iteration < Length - 1; ++iteration)
    {
        for (int currentIndex{ 0 }; currentIndex < Length -iteration- 1; ++currentIndex)
        {
            if (array[currentIndex] > array[currentIndex + 1])
                std::swap(array[currentIndex], array[currentIndex + 1]);
        }

        if (!swapped)
        {
            std::cout << "Early termination on iteration;" << iteration + 1 < '\n';
        }
    }
    for (int index{ 0 }; index < Length; ++index)
        std::cout << array[index] << ' ';
    std::cout << '\n';
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
