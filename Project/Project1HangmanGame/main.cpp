/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Kimberly Schmid
 * Date: November 5, 2017
 * Purpose: Project One Hangman Game
 *
 */

//System Libraries
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <ctime>

using namespace std;

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes

//Execution Begins Here!


int main() {
     //Declare Variables
    
    srand(time(0));
    string words[] = {"hydrogen", "sodium", "helium", "lead", "cobalt", "oxygen"}; //Answer drawn randomly
    string answer = words[rand() % 6];                                             //from string array.
    string working;                                                                //String being modified by user interaction.
    string guesses;                                                                //Stores incorrect guesses for user reference.
    string input;                                                                  //Used for operating on input letters.
    string alpha = "abcdefghijklmnopqrstuvwxyz";                                   //Used to identify non-alpha characters
    
        //Initialize Variables
    
        //Input Data/Variables
    
        //Process or map the inputs to the outputs
    
        //Display/Output all pertinent variables

    for (int x = 0; x < answer.size(); x +=1){                                     //assigns appropriate number of asterisks to working string
        working.append("*");
    }
    cout<<"Welcome to Periodic Table Hangman!"<<endl<<endl;
    cout<<"----------"<<endl;
    cout<<"|         |"<<endl;
    cout<<"|        \\O/"<<endl;
    cout<<"|         X"<<endl;
    cout<<"|        / \\ "<<endl;
    cout<<"Try and guess different elements of the periodic table!"<<endl;
    cout<<"Type in a letter then push enter."<<endl;
    cout<<"Guess the right element before your man dies."<<endl;
    
    for(int x = 0; x < 6;){                               //Content displayed at each turn of the game.
        cout<<"wrong letters guessed: ["<<guesses<<"]"<<endl<<working<<endl<<"Guess a letter: "; //Collects incorrect guesses to avoid repeats.
        cin>>input;
        cout<<endl<<"You entered: '"<<input<<"'"<<endl;   //Retrieves user input on a given turn.
        
        if(input.size() > 1){                             //Detects if more than one letter entered.
            cout<<"Please enter a single letter"<<endl;
        }
        else if (alpha.find(input) == -1){                //Detects if non-alpha character entered.
            cout<<"Invalid character."<<endl;
        }
        else if (answer.find(input) != -1){               //Inserts letter if found in word.
            working.replace(answer.find(input), 1, input);
        }
        else {                                            //If letter not found,
            cout<<"letter not found!"<<endl;
            guesses.append(input);                        //appends letter to "wrong guesses" box.
            x++;
            cout<<6 - x<<" guess(es) remaining"<<endl;    //Tells user # of guesses remaining.
        }
        if (answer == working){                           //Win condition: user entry (working) matches answer word, game ends.
            cout<<working<<endl<<"You win! Congratulations!"<<endl;
                cout<<"       \\O/"<<endl;
                cout<<"        X"<<endl;
                cout<<"       / \\ "<<endl;
                cout<<"You saved his life!"<<endl;
                cout<<"You are a true hero."<<endl;

            return 0;
        }
        if (x == 6) {                                     //Lose condition: user runs out of attempts, game ends.
            cout<<"The correct answer was '"<<answer<<"'. You lose! Better luck next time!"<<endl;
                cout<<"----------"<<endl;
                cout<<"|         |"<<endl;
                cout<<"|        \\O/"<<endl;
                cout<<"|         X"<<endl;
                cout<<"|        / \\ "<<endl;
            return 0;
        }
    }
}