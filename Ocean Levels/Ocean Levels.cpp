// Chapter 2 Programming Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    //Step 1: display purchasers = 16500 * 0.15
    int customers = 16500;
    cout << "Intial customers is: " << customers << endl;

    double purchasers = customers * 0.15;
    cout << "The amount of people purchasing energy drinks from this company is: " << purchasers << endl;

    //Step 2 : display citrus = purchasers * 0.58
    double citrus = purchasers * 0.58;

    cout << "The amount of purchasers buying citrus energy drinks are: " << citrus << endl;


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
