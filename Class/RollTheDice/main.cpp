/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Initializing Random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    char die1, die2, sum;
    unsigned int nRolls, check;
    int n2s=0, n3s=0, n4s=0, n5s=0, n6s=0, n7s=0,
            n8s=0, n9s=0, n10s=0, n11s=0, n12s=0;
    
    //Input or initialize values Here
    nRolls=36000;
    
    //Process/Calculations Here
    for(unsigned int roll=1; roll<=nRolls;roll++){
        die1=rand()%6+1; //[1,6]
        die2=rand()%6+1;
        sum=die1+die2;
        switch (sum){
        case 2:n2s++;break;
        case 3:n3s++;break;
        case 4:n4s++;break;
        case 5:n5s++;break;
        case 6:n6s++;break;
        case 7:n7s++;break;
        case 8:n8s++;break;
        case 9:n9s++;break;
        case 10:n10s++;break;
        case 11:n11s++;break;
        case 12:n12s++;break;
        default:{
                cout<<"Not possible sum="<<sum<<endl;
        exit (EXIT_FAILURE);    
        }
    }
}
    check=n2s+n3s+n4s+n5s+n7s+
            n8s+n9s+n10s+n11s+n12s;
            
           
    
    //Output Located Here
    cout<<"Number of rolls = "<<nRolls<<endl;
    cout<<"Two was thrown "<<n2s<<" times"<<endl;
    cout<<"Three was thrown "<<n3s<<" times"<<endl;
    cout<<"Four was thrown "<<n4s<<" times"<<endl;
    cout<<"Five was thrown "<<n5s<<" times"<<endl;
    cout<<"Six was thrown "<<n6s<<" times"<<endl;
    cout<<"Seven was thrown "<<n7s<<" times"<<endl;
    cout<<"Eight was thrown "<<n8s<<" times"<<endl;
    cout<<"Nine was thrown "<<n9s<<" times"<<endl;
    cout<<"Ten was thrown "<<n10s<<" times"<<endl;
    cout<<"Eleven was thrown "<<n11s<<" times"<<endl;
    cout<<"Twelve was thrown "<<n12s<<" times"<<endl;
    cout<<"Number of rolls= "<<n2s+n3s+n4s+n5s+n6s+n7s+
            n8s+n9s+n10s+n11s+n12s<<endl;

    //Exit
    return 0;
}

