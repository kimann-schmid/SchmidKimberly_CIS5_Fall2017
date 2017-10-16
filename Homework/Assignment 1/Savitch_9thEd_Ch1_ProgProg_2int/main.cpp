
/* 
 * File:   main.cpp
 * Author: Kimberly Schmid
 *
 * Created on September 15, 2017
 * Purpose: Homework Savitch Ch.1 Practice
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main( )
{
    int first; // the first number entered
    int second; // the second number entered
    int sum; // the sum of the two numbers
    int product; // the product of the two numbers 
    cout<< "Hello. \n";
    cout << "Press return after entering a number. \n";
    cout << "Enter the first number: \n";
    
    cin>> first;
    
    cout << "Enter the second number: \n";
    cin >> second;
    
    sum=first+second;
    product=first * second;
    cout << "If you have ";
    cout << first;
    cout << " and ";
    cout << second;
    cout << " then their sum is \n";
    cout << sum;
    cout << " and their product is " ;
    cout << product; "\n";
    cout << " Goodbye. \n";

    return 0;
}

