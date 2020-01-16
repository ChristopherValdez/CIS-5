/* 
 * File:
 * Author:Christopher Valdez
 * Date:January 14
 * Purpose:
 * Version:
 */

//System Libraries - Post Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries - Post Here

//Global Constants - Post Here
//Only Universal Physics/Math/Conversions found here
//No Global Variables
//Higher Dimension arrays requiring definition prior to prototype only.

//Function Prototypes - Post Here

//Execution Begins Here
int main(int argc, char** argv) {
    //Set random number seed here when needed
    
    //Declare variables or constants here
    //7 characters or less
    float mLthDos, mSwUsed, hLthDos, mMass, hMassG, hMassLb,
            cMass, gPerLb, gSwPerC, cPerSw;
    int totalC;
    //Initialize or input data here
    mSwUsed = 5.0;
    mMass = 35.0;
    mLthDos = mSwUsed/mMass;
    cMass = 350.0;
    gPerLb = (45359.2/100.0);
    gSwPerC = 0.001;
    cPerSw = cMass*gSwPerC;
    //Display initial conditions, headings here
    
    //Process inputs  - map to outputs here
    cout<<"Program to calculate the limit of Soda Pop Consumption."<<endl;
    cout<<"Input the desired dieters weight in lbs."<<endl;
    cin>>hMassLb;
    
    hMassG=hMassLb*gPerLb;
    hLthDos=hMassG*mLthDos;
    totalC=hLthDos/cPerSw;
    //Format and display outputs here
    cout<<"The maximum number of soda pop cans"<<endl;
    std::cout<<"which can be consumed is "<<std::setprecision(5)<<totalC<<" cans";
    //Clean up allocated memory here
    
    //Exit stage left
    return 0;
}