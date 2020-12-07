// Chapter5Quize2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <random> // for std::mt19937
#include <ctime> // for std::time

//GameLogic: return true if the user won, fales if they lost
bool playGame(int guess, int number)
{
    //loop through all of the guesses
    for (int count(1); count <= guess; count++)
    {
        std::cout << "Guess #" << count << ":";
        int guess;
        std::cin >> guess;

        if (guess > number)
            std::cout << "Your guess is too hight.\n";
        else if (guess < number)
            std::cout << "Your guess is too low.\n";
        else // guess == number
            return true;
    }

    return false;
}

bool playAgain()
{
    //ask user if they want to play again or not
    while (true)
    {
        char ch{};
        std::cout << "Would you like to play again (y/n)?";
        std::cin >> ch;

        switch (ch)
        {
        case 'y':
            return true;
        case 'n':
            return false;
        }
    }
}

int main()
{
    std::mt19937 mersenne{ static_cast<std::mt19937::result_type>(std::time(nullptr)) };
    std::uniform_int_distribution<> die{ 1,100 };

    constexpr int guesses{ 7 };
    do // while user play
    {
        int number{ die(mersenne) };

        std::cout << "Let's play a game.  I'm thinking of a number.  You have " 
            << guesses << " tries to guess what it is.\n";

        bool won{ playGame(guesses, number) };
        if (won)
            std::cout << "You win!\n";
        else
            std::cout << "Sorry, you lose. The answer is " << number << "\n";
    } while (playAgain());

    std::cout << "Thank you for playing.\n";
    return 0;
}

