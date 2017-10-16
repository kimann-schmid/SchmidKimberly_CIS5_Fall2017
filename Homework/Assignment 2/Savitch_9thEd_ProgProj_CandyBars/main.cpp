/* 
 * File:   main.cpp
 * Author: Kimberly Schmid
 * Created on September 24, 2017, 12:01 PM
 * Purpose:  How many candy bars can you eat without gaining weight
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
    float BMR; //Basal Metabolic Rate
    float weight; //initial weight
    float height; // height in inches
    float age; // age in years
    char gender; // Male or Female
    float NumBar; // Number of candy bars
    float Female= 655+(4.3*weight)+(4.7*height)-(4.7*age);
    float Male = 66+(6.3*weight)+(12.9*height)-(6.8*age);
    char F = Female;
    char M = Male;
    
    
    //Initialize Variables
    
    //Input Data/Variables
    
    //Process or map the inputs to the outputs
    cout<<"Please enter your gender. Enter 'M' for male, or 'F' for female\n";
    cin>>gender;
    
    cout<<"Enter your weight in pounds.\n";
    cin>>weight;
    
    cout<<"Enter your height in inches.\n";
    cin>>height;
    
    cout<<"Enter your age in years.\n";
    cin>>age;
    
    if (gender == F)
      BMR=  655+(4.3*weight)+(4.7*height)-(4.7*age);
       
    
    else
        BMR= 66+(6.3*weight)+(12.9*height)-(6.8*age);
    NumBar=BMR/230;
    
    cout<<"You can eat "<<NumBar<<" candy bars without gaining weight.";
              
            
    
    //Display/Output all pertinent variables
    
    //Exit the program
    return 0;
}