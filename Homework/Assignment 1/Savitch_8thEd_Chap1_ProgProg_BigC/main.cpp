/* 
 * File:   main.cpp
 * Author: Kimberly Schmid
 * Created on September 13, 2017
 * Purpose:  Big C
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    char c;
    //Input or initialize values Here
    cout<<"Big C Program"<<endl;
    cout<<"Input the letter to draw a Big C"<<endl;
    cin>>c;
    
    //Process/Calculations Here
    cout<<"  "<<c<<" "<<c<<" "<<endl;
    cout<<" "<<c<<"    "<<c<<endl;
    cout<<c<<endl;
    cout<<c<<endl;
    cout<<c<<endl;
    cout<<c<<endl;
    cout<<c<<endl;
    cout<<" "<<c<<"    "<<c<<endl;
    cout<<"  "<<c<<" "<<c<<" "<<endl;
    
    //Output Located Here

    //Exit
    return 0;
}

