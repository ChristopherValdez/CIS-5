/* 
 * File:    main.cpp
 * Author:  Christopher Valdez
 * Date:    01/16/2020
 * Purpose: Display roman numerals for an input between 1 and 10, reject other.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    char errstr[] = "Entered number is not valid, reenter number:";//string with error msg.
    int x;
    //Initialize Variables
    cout << "Enter a number between 1 and 10:" << endl;
    
    //Process or map Inputs to Outputs
    
    //Input Validation char and between 1 and 10
    //Receive user input
    while (!(cin >> x) || !(x > 0 && x < 10 )) {
        clog << errstr << endl; //Explain Error
        cin.clear();            //Clear the previous input
        cin.ignore(123, '\n');  //Discard previous input
    }
    
    
    switch ( x ) {//takes input and checks cases available then outputs match.
        case 1 :
            cout << x << " is I in Roman numerals";
            break;
        case 2 :
            cout << x << " is II in Roman numerals";
            break;
        case 3 :
            cout << x << " is III in Roman numerals";
            break;
        case 4 :
            cout << x << " is IV in Roman numerals";
            break;
        case 5 :
            cout << x << " is V in Roman numerals";
            break;
        case 6 :
            cout << x << " is VI in Roman numerals";
            break;
        case 7 :
            cout << x << " is VII in Roman numerals";
            break;
        case 8 :
            cout << x << " is VIII in Roman numerals";
            break;
        case 9 :
            cout << x << " is IX in Roman numerals";
            break;
        case 10 :
            cout << x << " is X in Roman numerals";
            break;
    }
    
   
    
    //Display Outputs

    //Exit stage right!
    return 0;
}