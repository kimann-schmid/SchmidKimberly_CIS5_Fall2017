/* 
 * File:   main.cpp
 * Author: Kimberly Schmid
 *Created on December 5, 2017, 3:57 PM
 * Purpose: repeat practice program 1 except use the class string to extract the fields,
 *          not the cstring functions.
 */

#include <iostream>
#include <cstdlib>
#include <string>

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

