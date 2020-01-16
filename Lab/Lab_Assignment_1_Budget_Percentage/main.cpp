/* 
 * File:   main.cpp
 * Author: Christopher Valdez
 * Created on January 7, 10:49PM
 * Purpose:  calculate the military budget as a percentage of the federal budget
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    float milBdgt,fedBdgt,mlPrcnt;
    const int convertPercent=100;
    
    //Initialize Variables
    milBdgt=7.0e11f;
    fedBdgt=4.1e12f;
    
    //Process or map Inputs to Outputs
    std::cout<<std::setprecision(4)<<endl;
    cout<<"Federal Budget = "<<fedBdgt<<" Trillion Dollars"<<endl;
    cout<<"Military Budget = "<<milBdgt<<" Billion Dollars\n"<<endl;
    cout<<"Military budget is "<<milBdgt/fedBdgt*convertPercent<<"% of the federal budget."<<endl;

    //Display Outputs

    //Exit stage right!
    return 0;
}