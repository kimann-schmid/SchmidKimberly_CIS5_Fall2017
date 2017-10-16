/* 
 * File:   main.cpp
 * Author: Kimberly Schmid
 * Created on September 24, 2017
 * Purpose:  how many cereal boxes in a metric ton
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    short CerealWt; // The initial weight of the cereal package
    short CerMT; // Amount of Cereal packages in a metric ton
    short Ton;     // a metric ton = 35,273.92 oz.
    
    //Initialize Variables
    
    
    //Input Data/Variables
    cout<< "Please enter the weight in ounces of the cereal package.\n";
    cin>>CerealWt;
    
    CerMT=35273.92/CerealWt;
    
    cout<<"There are "<<CerMT<<" packages in a metric ton.";
    
    
    
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    
    //Exit the program
    return 0;
}