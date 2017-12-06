/* 
 * File:   main.cpp
 * Author: Kimberly Schmid
 * Created on November 1, 2017
 * Purpose:  Project Game - Hangman
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declare Variables

int numGues=6;
int misses=0;
unsigned int nGames, wins=0, losses=0;
string word;
char guess;


 
    
    //Initialize Variables
string keywrd[10]={"hydrogen", "magnesium", "argon", "arsenic", "zirconium", 
            "beryllium", "molybdenum", "bromine", "manganese", "fluorine"};




srand(static_cast<unsigned int>(time(0))); //initialize random number seed
keywrd[rand()%10+1];

    
    //Input Data/Variables



    
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
cout<<"Welcome to Hangman! Lets begin guessing!"<<endl;
cout<<keyword;





  
    //Exit the program
    return 0;
}
