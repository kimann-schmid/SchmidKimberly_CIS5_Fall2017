/* 
 * File:   main.cpp
 * Author: Kimberly Schmid
 * Created on September 16, 2017
 * Purpose:  Big CS!
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries 

//Global Constants - Physics/ Math/Conversions Only

// Function Prototypes

// Execution Begins Here!
int main( ) {
    //Variable Declaration
    float Quarters;
    float Quarters_Total;
    float Dimes;
    float Dimes_Total;
    float Nickels;
    float Nickels_Total;
    float Pennies;
    float Pennies_Total;
    float Total;
    
    
    //Variable Initialization 
    
    //Process Mapping - Inputs to Outputs
cout << "This program allows you to enter the number of coins you have \n";
cout <<   "and will tell you the monetary value of them \n";
cout <<   "Input the number of Quarters you have, then press enter. \n";
cin>> Quarters;
cout<< "Input the number of Dimes you have, then press enter.\n";
cin>> Dimes;
    
cout<< "Input the number of Nickels you have, then press enter. \n";
cin>> Nickels;
    
cout<< "Input the number of Pennies you have, then press enter. \n";
cin>>Pennies;

cout.setf(ios::fixed);
cout.setf(ios::showpoint);
cout.precision(2);

cout<< "You have \n";
 Quarters_Total = Quarters * 0.25;
cout<< "$"<<Quarters_Total<<" worth of Quarters \n";

cout<< "You have \n";
Dimes_Total= Dimes*0.10;
cout<<"$"<< Dimes_Total<<" worth of dimes \n";

cout<< "You have \n";
Nickels_Total = Nickels * .05;
cout <<"$"<< Nickels_Total<<" worth of nickels \n";

cout<< "You have \n";
Pennies_Total=Pennies*.01;
cout<< "$"<<Pennies_Total<<" worth of pennies \n";
    
cout<< "The total amount of change you have is \n";
Total = Quarters_Total+Dimes_Total+Nickels_Total+Pennies_Total;
cout<<"$"<< Total;
            
    
    //Re-Display Inputs and write the Outputs
    
    //Exit function main, end of program
    return 0;
}

