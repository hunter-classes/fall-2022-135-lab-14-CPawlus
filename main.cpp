/*
Author: Christopher Pawlus
Course: CSCI-235
Instructor: Professor Zamansky
Assignment: Lab 14.

This program uses classes and mainly template classes 
to create effciency with different data types.
*/

#include <iostream>
#include "funcs.cpp"  

int main() 
{
    MyVector<int> exp;
    exp.push_back(1);
    std::cout << exp.size() << "\n";
    std::cout << exp.empty() << "\n";
    return 0;
}