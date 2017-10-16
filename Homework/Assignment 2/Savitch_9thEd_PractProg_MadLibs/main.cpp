/* 
 * File:   main.cpp
 * Author: Kimberly Schmid
 * Created on Sept 22, 2017
 * Purpose: Mad Libs
 */ 

//System Libraries  
#include <iostream> //I/O Stream Library
using namespace std; //the standard name-space for system libraries

//User Libraries 

//Global Constants - Physics/ Math/Conversions Only

// Function Prototypes

// Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declaration
    string TeachNa; // Instructors Name
    string name; // student name
    string food; // a food
    string num; // a number between 100 & 120
    string adj; // an adjective
    string color; // a color
    string anim; // an animal
    
    //Variable Initialization 
    
    //Process Mapping - Inputs to Outputs
    cout<<"Let's play Mad Libs! \nEnter the name of your teacher then press enter. " ;
    cin>> TeachNa;
    
    cout<< "Enter your name ";
    cin>> name;
    
    cout<< "Enter a type of food ";
    cin>> food;
    
    cout<< "Enter a number between 100 and 120 ";
    cin>> num;
    
    cout<< "Enter an adjective "; 
    cin>> adj;
    
    cout << "Enter a color "; 
    cin>> color;
    
    cout<< "Enter a type of animal "; 
    cin>> anim;
    
    cout<< "\n\nHere's your Mad Lib! \n\n";
    cout<<"Dear Instructor "<<TeachNa<<",\n";
    cout<<"I am sorry that I am unable to turn in my homework at this time.\n";
    cout<<"First, I ate a rotton "<<food<<", which made me turn "<<color<< " and extremely ill.\n";
    cout<<"I came down with a fever of "<<num<<". Next, my "<<adj<<" pet "<<anim;
    cout<<" must have smelled \nthe remains of the "<<food<< " on my homework,";
    cout<<" because he ate it.\nI am currently rewriting my homework and hope \n";
    cout<<"you will accept it late.\n";
    cout<<"Sincerely,\n"<<name;
    
    //Re-Display Inputs and write the Outputs
    
    //Exit function main, end of program
    return 0;
}

