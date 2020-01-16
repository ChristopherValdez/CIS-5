/* 
 * File:   main.cpp
 * Author: Christopher Valdez
 * Created on January 7, 2020, 11:06 PM
 * Purpose:  Homework Gaddis Total Purchase.
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
    float item1, item2, item3, item4, item5, salesTax, subTotal, CONVPERC;
    int taxPercent;
    //Initialize Variables
    item1 = 15.95;  //I really want to use an array here.
    item2 = 24.95;
    item3 = 6.95;
    item4 = 12.95;
    item5 = 3.95;
    CONVPERC = 100;
    taxPercent = 7;
    //Process or map Inputs to Outputs
    subTotal = item1 + item2 + item3 + item4 + item5;
    salesTax = taxPercent/CONVPERC;
    //Display Outputs
    std::cout<<std::setprecision(4);
    cout<<"Item 1: $"<<item1<<"\nItem 2: $"<<item2<<"\nItem 3: $"<<item3<<"\nItem 4: $"<<item4<<"\nItem 5: $"<<item5<<endl;
    cout<<"\nSubtotal: $"<<subTotal<<endl;
    cout<<"Sales Tax "<<taxPercent<<"%"<<endl;
    cout<<"Total: $"<<subTotal*salesTax+subTotal<<endl;
    //Exit stage right!
    return 0;
}