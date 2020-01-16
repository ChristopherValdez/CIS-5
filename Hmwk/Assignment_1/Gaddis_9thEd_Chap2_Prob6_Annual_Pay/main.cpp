/* 
 * File:   main.cpp
 * Author: Christopher Valdez
 * Created on January 8, 2020, 3:22 AM
 * Purpose:  Homework Gaddis Annual Pay.
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
    int payAmount, payPeriods, annualPay;
    
    //Initialize Variables
    payAmount = 2200;
    payPeriods = 26;
    //Process or map Inputs to Outputs
    annualPay = payAmount*payPeriods;
    //Display Outputs
    cout << "Annual Pay: $" << annualPay << "." << endl;
    //Exit stage right!
    return 0;
}