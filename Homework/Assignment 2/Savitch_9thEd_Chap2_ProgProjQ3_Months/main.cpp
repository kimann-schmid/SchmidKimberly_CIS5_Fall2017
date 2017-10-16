/* 
 * File:   main.cpp
 * Author: Kimberly Schmid
 * Created on: September 11, 2017 6:21pm
 * Purpose: Homework Savitch 9th Ed Programming Problem 2
 * Retroactive payments- User enter number of months
 */ 

//System Libraries  
#include <iostream> //I/O Stream Library
using namespace std; //the standard name-space for system libraries
 

//Global Constants - Physics/ Math/Conversions Only

// Function Prototypes

// Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declaration
    const float raise = .076; // raise of 7.6%
    int salary; // previous yearly salary
    float MIA; //Monthly Increase Amount
    float NumMo; //number of months for retroactive payment
    float retro = MIA*NumMo; //retroactive pay amount
    float newmsal; // new monthly salary
    float newyear; // new yearly salary
    //Variable Initialization 
    
    //Process Mapping - Inputs to Outputs
    cout<<"Enter your previous yearly salary\n";
    cin>> salary;
    cout<<"Enter the number of months which your are receiving for retroactive payments \n";
    cin>>NumMo;
    
    
    MIA = salary/12*raise;
    retro = MIA*NumMo;
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    cout << "Your retroactive pay amount is "<<retro<<endl;
    
    
    newmsal = (salary/12*raise)+(salary/12); 
    cout <<"Your new monthly salary is "<<newmsal<<endl;
    
    
    cout<<"Your new yearly salary is ";
    
    newyear=newmsal*12;
    cout<< newyear;
            
    //Re-Display Inputs and write the Outputs
    
    //Exit function main, end of program
    return 0;
}

