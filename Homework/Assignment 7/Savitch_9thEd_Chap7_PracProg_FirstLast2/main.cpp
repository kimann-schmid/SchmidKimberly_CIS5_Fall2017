/* 
 * File:   main.cpp
 * Author: Kimberly Schmid
 * Created on November 26, 2017
 * Purpose: Write a function named fristlast2 that takes as input an array of integers
 *          and an integer that specifies how many entires are in the array. 
 *          The function should return true if the array starts or ends with the digit 2.
 *          Otherwise it should return false.
 */

#include <iostream>
#include <cstdlib>
using namespace std;

void fstlst2 (int array[6]);

int main(int argc, char** argv) {
    
    
    
    int array[6]={2,5,8,100,20,25};
    
   
    cout<<fstlst2(array[6])<<endl; //always outputs 1, cant figure out why
    

    
    return 0;
}

void fstlst2 (int array[6]){
    if ((array[0]==2) || (array[5] == 2))
        cout<< "Array contains 2"<<endl;
    else if ((array[0]>=3) || (array[5]>=3)) 
        cout<< "Array does not start or end with 2"<<endl;
    else if ((array[0]<=1) ||(array[5]<=1))
        cout<<"Array does not start or end with 2"<<endl;
    else cout<<"Array does not start or end with 2"<<endl;
    return 0;
}