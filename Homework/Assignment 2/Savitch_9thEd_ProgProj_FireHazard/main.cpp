/* 
 * File:   main.cpp
 * Author: Kimberly Schmid
 * Created on September 24, 2017, 12:01 PM
 * Purpose:  Maximum Room Capacity - Fire Hazard
 * THIS PROGRAM DOESN'T WORK
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
    int MRO; // Maximum Room Occupancy
    int NumPeo; // Number of people attending meeting
    int ExtPeo; // Number of people above or below the Maximum Occupancy
   
    
    //Initialize Variables
    
    //Input Data/Variables
    
    cout<<"Hello! Use this program to determine if your meeting is within fire regulations.\n";
    cout<<"Please enter the number of people expected to attend the meeting, then press enter.\n";
    cin>>NumPeo;
    
    cout<<"Enter the Maximum Room Occupancy of the meeting room.\n";
    cin>>NumPeo;
    
    if (NumPeo>MRO)
        ExtPeo=NumPeo-MRO;
    else
        ExtPeo=MRO-NumPeo;
        
    if (NumPeo>MRO)
        cout<<"The meeting cannot be held due to fire regulations. "<<ExtPeo<< " people must be excluded.";
    else
        cout<<"The meeting can continue as planned."<<ExtPeo<< " additional people can attend.";
    
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    
    //Exit the program
    return 0;
}