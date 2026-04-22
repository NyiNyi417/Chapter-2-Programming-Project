// Chapter 2 Programming Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <chrono>

int main()
{
    //Step 1: Set the current ocean level
    float rise_rate = 1.5;
    // Step 2 : Calculate the ocean level in 5, 7, 10 years. 
    float print = 1.5 * 5;
    std::cout << "The new ocean level rise rate in years is:" << print;

    print = 1.5 * 7;
    std::cout << "The new ocean level rise rate in years is:" << print;

    print = 1.5 * 10;
    // Step 3 : Display the ocean level in 5, 7, and 10 years.
    std::cout << "The new ocean level rise rate in years is:" << print;


    return 0; //

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
