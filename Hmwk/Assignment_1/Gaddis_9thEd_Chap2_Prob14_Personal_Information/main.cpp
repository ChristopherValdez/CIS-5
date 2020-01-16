/* 
 * File:   main.cpp
 * Author: Christopher Valdez
 * Created on January 8, 2020, 12:39 AM
 * Purpose:  Homework Gaddis Personal Information.
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    string name, address, telephone, major;
    
    //Initialize Variables
    name = "Christopher Valdez";
    address = "2630 Hegal Place, Apt. 42, Alexandria, Virginia, 23242";
    telephone = "867-5309";
    major = "Computer Science";
    //Process or map Inputs to Outputs
    
    //Display Outputs
    cout << "Name: " << name << "\nAddress: " << address << "\nTelephone: " << telephone << "\nMajor: " << major << endl;
    //Exit stage right!
    return 0;
}