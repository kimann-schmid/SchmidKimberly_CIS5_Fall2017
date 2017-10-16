
/* 
 * File:   main.cpp
 * Author: Kimberly Schmid
 *
 * Created on August 29, 2017, 10:34 PM
 * Purpose: Homework Savitch Ch.1 Practice
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main( )
{
    int width, length, total;
    cout << "Press return after entering a number. \n";
    cout << "Enter the width of the fence: \n";
    
    cin>> width;
    
    cout << "Enter the length of the fence: \n";
    cin >> length;
    
    total=length+length+width+width;
    cout << "If the width of your fence is ";
    cout << width;
    cout << " and the length of your fence is ";
    cout << length;
    cout << " then the total length of fence needed is \n";
    cout << total;

    return 0;
}

