/* 
 * File:   main.cpp
 * Author: Christopher Valdez
 * Created on January 14
 */

//System Libraries
#include <iostream>
#include <iomanip>//Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    double ip1, ip2, ip3, ip4, ip5, average;
    //Initialize or input i.e. set variable values
    cout<<"Input 5 numbers to average."<<endl;
    cin>>ip1;
    cin>>ip2;
    cin>>ip3;
    cin>>ip4;
    cin>>ip5;
    //Map inputs -> outputs
    average=(ip1+ip2+ip3+ip4+ip5)/5;
    //Display the outputs
    std::cout.precision (2);
    std::cout<<"The average = "<<std::showpoint<<average;
    //Exit stage right or left!
    return 0;
}