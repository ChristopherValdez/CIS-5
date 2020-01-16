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
    int bag, CAL, serv, eaten,CALPERCOOKIE;
    
    bag = 40;
    CAL = 300;
    serv = 10;
    
    CALPERCOOKIE = CAL/(bag/serv);
    //Initialize or input i.e. set variable values
    //Map inputs -> outputs
    cout<<"Calorie Counter"<<endl;
    cout<<"How many cookies did you eat?"<<endl;
    cin>>eaten;
    //Display the outputs
    cout<<"You consumed "<<eaten*CALPERCOOKIE<<" calories.";
    //Exit stage right or left!
    return 0;
}