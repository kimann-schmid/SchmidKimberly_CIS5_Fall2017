
/* 
 * File:   main.cpp
 * Author: Kimberly Schmid
 * Created on November 28, 2017
 * Purpose:  Phone Book
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
    string names [] = {"Micheal Myers", "Ash Williams",
                        "Jack Torrance", "Freddy Krueger"};
    string phnNum [] = {"333-8000", "333-2323", "333-6150", "339-7970"};
    string tgtNm, tgtPhn;
    char c;
    do
    {
        cout<<"Enter a name to find the "
                <<"corresponding phone number."
                <<endl;
        getline(cin, tgtNm);
        tgtPhn = lokupNm(tgtNm, names, phnNum,40);
        if (tgtPhn.length()>0)
            cout<<"The number is: "
                    <<tgtPhn<<endl;
        else
            cout<<"Name not found. "<<endl;
        cout<<"Look upi another name? (y/n)"<<endl;
        cin>>c;
        cin.ignore();
    }while (c == 'y');
    
    
    
    //Initialize Variables
    
    //Input Data/Variables
    
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    
    //Exit the program
    return 0;
}