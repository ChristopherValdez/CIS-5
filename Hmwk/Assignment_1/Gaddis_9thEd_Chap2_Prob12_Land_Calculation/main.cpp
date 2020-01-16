/* 
 * File:   main.cpp
 * Author: Christopher Valdez
 * Created on January 8, 2020, 3:08 AM
 * Purpose:  Homework Gaddis Land Calculation.
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
    int acreConvert;
    float SQFT, total;
    
    //Initialize Variables
    acreConvert = 43560; //acres per square feet
    SQFT = 391876;
    //Process or map Inputs to Outputs
    total = SQFT/acreConvert;
    
    //Display Outputs
    cout << "A tract of land " << SQFT << " Square feet is " << total << " acres." << endl;
    
    //Exit stage right!
    return 0;
}