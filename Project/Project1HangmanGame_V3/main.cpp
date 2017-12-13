/* 
 * File:   main.cpp
 * Author: Kimberly Schmid
 * Date: November 5, 2017
 * Purpose: Project Two Hangman Game Version Two
 *
 */

//System Libraries
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <fstream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants
const float PERCENT=100.0f;                                                     //Conversion to Percent

//Function Prototypes

//string hangman(string, string, string, string, string, string, string, int, int, int);
//Execution Begins Here!


int main() {
     //Declare Variables

    srand(time(0));
    string words[] = {"hydrogen", "sodium", "helium", "lead", "cobalt", "oxygen",
                        "caesium", "argon", "krypton", "radon", "fluorine","bromine",
                        "chlorine","arsenic","carbon","zinc","scandium"};        //Answer drawn randomly
    string answer; //= words[rand() % 17];                                       //from string array.
    string working;                                                              //String being modified by user interaction.
    string guesses;                                                                //Stores incorrect guesses for user reference.
    string input;                                                                  //Used for operating on input letters.
    string alpha = "abcdefghijklmnopqrstuvwxyz";                                   //Used to identify non-alpha characters
    string playagain;
    int nGames = 0;                                                                 // Number of games played
    
    int wins = 0;                                                                 //stat-tracking variables
    int losses = 0;
    
    int loop;
    
        //Initialize Variables
    
        //Input Data/Variables
    
        //Process or map the inputs to the outputs
    
        //Display/Output all pertinent variables
    for (loop = 0; loop < 1;){
        
        answer = words[rand() % 17];
        guesses = "";                                                                  //reset necessary variables for each playthrough
        working = "";
        
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
            cout<<"wrong letters guessed: ["<<guesses<<"]"<<endl<<
                    working<<endl<<"Guess a letter: ";        //Collects incorrect guesses to avoid repeats.
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
                cout<<"You guessed a correct letter!"<<endl;
            }
            else {                                            //If letter not found,
                cout<<input<<" not found!"<<endl;
                guesses.append(input);                        //appends letter to "wrong guesses" box.
                x++;
                cout<<6 - x<<" incorrect guess(es) remaining"<<endl;    //Tells user # of guesses remaining.
                    if (x==1){
                        cout<<"----------"<<endl;
                        cout<<"|         |"<<endl;
                        cout<<"|         O"<<endl;
                        cout<<"|"<<endl;
                        cout<<"|"<<endl;


                }
                    else if (x==2){
                        cout<<"----------"<<endl;
                        cout<<"|         |"<<endl;
                        cout<<"|        \\O"<<endl;
                        cout<<"|"<<endl;
                        cout<<"|"<<endl;

                    }
                    else if (x==3){
                        cout<<"----------"<<endl;
                        cout<<"|         |"<<endl;
                        cout<<"|        \\O/"<<endl;
                        cout<<"|"<<endl;
                        cout<<"|"<<endl;

                    }
                    else if (x==4) {
                        cout<<"----------"<<endl;
                        cout<<"|         |"<<endl;
                        cout<<"|        \\O/"<<endl;
                        cout<<"|         X"<<endl;
                        cout<<"|"<<endl;

                    }
                    else if (x==5){
                        cout<<"----------"<<endl;
                        cout<<"|         |"<<endl;
                        cout<<"|        \\O/"<<endl;
                        cout<<"|         X"<<endl; 
                        cout<<"|          \\ "<<endl;
                    }
            }
            if (answer == working){                           //Win condition: user entry (working) matches answer word, game ends.
                wins++;
                nGames++;
                x = 6;
                cout<<working<<endl<<"You win! Congratulations!"<<endl;
                cout<<"       \\O/"<<endl;
                cout<<"        X"<<endl;
                cout<<"       / \\ "<<endl;
                cout<<"You saved his life!"<<endl;
                cout<<"You are a true hero."<<endl;
                cout<<"You have played "<<nGames<<" game(s)."<<endl;
                cout<<"You have won "<<wins<<" game(s)"<<endl;
                //cout<<"Percentage of games won is "<<wins/nGames*PERCENT<<"%"<<endl;
                cout<<"You have lost "<<losses<<" game(s)"<<endl;
                //cout<<"Percentage of games lost is "<<losses/nGames*PERCENT<<"%"<<endl;
                cout<<"Play again? (y/n)";
                cin>>playagain;
                if (playagain == "n"){
                    loop = 1;
                }
            }
            else if (x == 6) {                                     //Lose condition: user runs out of attempts, game ends.
                losses++;
                cout<<"The correct answer was '"<<answer<<"'. You lose!"<<endl;
                cout<<"Better luck next time!"<<endl;
                cout<<"----------"<<endl;
                cout<<"|         |"<<endl;
                cout<<"|        \\O/"<<endl;
                cout<<"|         X"<<endl;
                cout<<"|        / \\ "<<endl;
                nGames++;
                cout<<"You have played "<<nGames<<" game(s)"<<endl;
                cout<<"You have won "<<wins<<" game(s)"<<endl;
                //cout<<"Percentage of games won is "<<wins/nGames*PERCENT<<"%"<<endl;
                cout<<"You have lost "<<losses<<" game(s)"<<endl;
                //cout<<"Percentage of games lost is "<<losses/nGames*PERCENT<<"%"<<endl;
                cout<<"play again? (y/n)";
                cin>>playagain;
                if (playagain == "n"){
                    loop = 1;
                }
            }
        }
    }
}

//int main(){
//    
//    string yesno;
//    cout<<"play hangman? (y/n)";
//    cin>>yesno;
//    if (yesno == "y") {
//        while (hangman() == "y"){
//            hangman();
//        }
//    }
//    else (yesno == "n");
//        return 0;
//    
//
//}

    

