/* 
 * File:   main.cpp
 * Author: Christopher Valdez
 * Created on January 7, 2020, 11:33 PM
 * Purpose: Homework Gaddis Sales Prediction
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
    float ECSales, CompGross, ECGross;
    
    //Initialize Variables
    ECSales = .58;
    CompGross = 8.6e6f;
    //Process or map Inputs to Outputs
    ECGross = CompGross * ECSales;    
    
    //Display Outputs
    cout << "East Coast sales division will gross " << ECGross << " if the company makes " << CompGross << "." << endl;
    
    //Exit stage right!
    return 0;
}