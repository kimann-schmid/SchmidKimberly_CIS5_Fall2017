/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
const float GRAVITY=32.174f; //Gravity ft/sec^2 @sea level
const float CNVFTMT=3.28f; // conversion from feet to meters
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float time; //Input value in seconds
    float distFt; // output value in feet
    float distMt; //output value in meters
    float gravMt; //Acceleration due to gravity in meters
    //Input or initialize values Here
   
    cout<<"This program calculates the distance dropped in free fall"<<endl;
    cout<<"Input the time in seconds during free fall"<<endl;
    cin>>time;
    //Process/Calculations Here
    distFt=GRAVITY*time*time/2;
    distMt=distFt/CNVFTMT;
    //Output Located Here
    cout<<"Time in free fall = "<<time<<"(secs)"<<endl;
    cout<<"Distance fallen ="<<distFt<<"(ft)"<<endl;
    cout<<"Distance fallen ="<<distMt<<"(meters)"<<endl;
    cout<<"Gravity ->" <<"GRAVITY"<<"(ft/sec^2)=";
    cout<<gravMt<<"meters/sec^2)"<<endl;
    //Exit
    return 0;
}