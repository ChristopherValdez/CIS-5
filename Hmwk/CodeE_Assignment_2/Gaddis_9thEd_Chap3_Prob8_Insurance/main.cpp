/* 
 * File:   main.cpp
 * Author: Christopher Valdez
 * Created on January 14
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...


//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int minInsur, homeVal, percInsur;
    double percConv;
    
    
    //Initialize or input i.e. set variable values
    percInsur = 80;
    percConv = 100;
    //Map inputs -> outputs
    cout<<"Insurance Calculator"<<endl;
    cout<<"How much is your house worth?"<<endl;
    cin>>homeVal;
    
    minInsur = homeVal*(percInsur/percConv);
    //Display the outputs
    cout<<"You need $"<<minInsur<<" of insurance.";
    //Exit stage right or left!
    return 0;
}