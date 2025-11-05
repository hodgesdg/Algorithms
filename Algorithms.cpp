// Algorithms.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
#include "algorithms.h"
#include <vector>
using namespace std;

int main()
{
    std::cout << "Hello World!\n";
    vector<int>arr = { 42, 7, 15, 89, 23, 4, 67, 12, 56, 90,
                   3, 18, 34, 76, 27, 11, 63, 8, 99, 51,
                   30, 2, 70, 45, 19 };
    sort(begin(arr),end(arr));
    int pos = binarysearch(34,arr);
    std::cout << pos;
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
