/* 
 * File:    main.cpp 
 * Author:  Christopher Valdez
 * Date:    01/17/20
 * Purpose: Take user input, height and width for two rectangles
 *          Compare the areas and print results.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions
const float newtonsConv = 9.8;
//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    float objMass, objWeight;
    //Initialize Variables
    cout << "Enter the mass of an object:" << endl;
    cin >> objMass;
    
    objWeight = objMass * newtonsConv;
    
    //Process or map Inputs to Outputs
    
    if ( objWeight >= 10 && objWeight <= 1000 ) {
        printf ("The object weighs %.1f newtons", objWeight);
    }
    else if ( objWeight > 1000 ) {
        cout << "The object is too heavy" << endl;
    }
    else if ( objWeight < 10 ) {
        cout << "The object is too light" << endl;
    }
    
    //Display Outputs

    //Exit stage right!
    return 0;
}