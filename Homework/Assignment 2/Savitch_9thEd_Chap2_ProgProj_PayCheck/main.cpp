/* 
 * File:   main.cpp
 * Author: Kimberly Schmid
 * Created on September 24, 2017
 * Purpose:  Figuring out a paycheck
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
    int hours; // Number of hours worked
    float gross; // Gross pay
    float rate; // Pay Rate
    float SSTAX;// Social Security Tax (6% withheld from gross pay)
    float FITAX; // Federal Income Tax (14% withheld)
    float SITAX; // State Income Tax (5% withheld)
    int Dues=10; // Union dues $10 per week
    int Depend; // number of dependants
    float NetPay; // Net take home pay for the week
    float TotWH; //Total Witholding
    
    
    //Initialize Variables
    
    //Input Data/Variables
    
    //Process or map the inputs to the outputs
    cout<< "Enter the hourly rate of pay: $";
    cin>> rate;
    
    cout<< "Enter the number of hours workd,\n"
            <<"rounded to a whole number of hours: ";
    cin>> hours;
    if(hours>40)
        gross=rate*40+1.5*rate*(hours-40);
    else
        gross=rate*hours;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    cout<<"Hours = "<<hours<<endl;
    cout<<"Hourly pay rate = $"<<rate<<endl;
    cout<<"Gross Pay = $"<<gross<<endl;
    cout<<"Your withholding amount for Social Security Tax is \n"
            <<gross*.06
            <<SSTAX<<endl;
    
    cout<<"Your withholding for Federal Income Tax is \n"
            <<gross*.14
            <<FITAX<<endl;
    cout<<"Your withholding for State Income Tax is \n"
            <<gross*.05
            <<SITAX<<endl;
    cout<<"Your withholding for Dues is $10\n";
    
    TotWH=(gross*.05)+(gross*.14)+(gross*.06)+Dues;
    NetPay=gross-TotWH;
    cout<<"Your net take home pay for the week is $"<<NetPay<<endl;
    
            
    
    

    
    
    //Display/Output all pertinent variables
    
    //Exit the program
    return 0;
}