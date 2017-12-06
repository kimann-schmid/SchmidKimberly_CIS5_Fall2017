/* 
 * File:   main.cpp
 * Author: Kimberly Schmid
 *Created on December 5, 2017, 3:57 PM
 * Purpose: Create a Cstring variable that contains a name, age, and title. 
 *          Each field is sparated by a space. Ex: Bob 45 Programmer.
 *          Write a program using only functions from cstring (not the class string)
 *          that can extract the name, age, and title into sparate variables.
 */

#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    char person[] = "Bob 50 Programmer";
    char * pch;
    string array[3];
    int i=0;
   
    pch=strtok( person, " "); 
    while(pch != NULL)
    {
            array[i++]=pch;
            pch = strtok (NULL, " ");
            
}
    for(int i=0 ; i<3; i++)
        cout<<array[i]<<endl;
    
    //name = strchr (person, ' ');
    
    return 0;
}

