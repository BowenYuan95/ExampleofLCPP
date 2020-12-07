// Random_Number_Generator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib> // for std::rand() and std::srand()

// try to write a pseudo-random number generator (PRNG)

//unsigned int PRNG() 
//{
//    static unsigned int seed{5327};
//
//    seed = 8253729 * seed + 2396403;
//
//    //try to return a value between 0 and 32767;
//    //I think this is a genius step!
//    return seed % 32768;
//}

int main()
{
    ////Print 100 random numbers
    //for (int count {1}; count <= 100; ++count)
    //{
    //    std::cout << PRNG() << '\t';

    //    //start a new row after printing 5 numbers
    //    if (count % 5 == 0)
    //        std::cout << '\n';
    //}
    //return 0; 

    //this is another way to write a generatorwith build in function

    //std::srand() sets the initial seed value to a value 
    //that is passed in by the caller. std::srand() should 
    //only be called once at the beginning of your program. 
    //This is usually done at the top of main().
    std::srand(5323);

    // Due to a flaw in some compilers, we need to call std::rand() once
    // here to get "better" random numbers.
    std::rand();

    for (int count{ 1 }; count <= 100; ++count)
    {
        std::cout << std::rand() << '\t';
        if (count % 5 == 0)
            std::cout << '\n';
    }

    return 0; 

}

