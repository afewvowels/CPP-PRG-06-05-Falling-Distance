//
//  main.cpp
//  PRG-6-5-Falling-Distance
//
//  Created by Keith Smith on 10/7/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//
//  When an object is falling because of gravity, the following formula can be used to
//  determine the distance the object falls in a specific time period:
//
//  d = 1/2 * gt^2
//
//  The variables in the formula are as follows: d is the distance in meters, g is 9.8, and t
//  is the amount of time, in seconds, that the object has been falling.
//
//  Write a function named fallingDistance that accepts an object's falling time (in
//  seconds) as an argument. The function should return the distance, in meters, that the
//  object has fallen during the time interval. Write a program that demonstrates the
//  function by calling it in a loop that passes the values 1 through 10 as arguments and
//  displays the return value.


#include <iostream>
#include <iomanip>
#include <cmath>

float fallingDistance(int);

using namespace std;

int main()
{
    // Run for loop in main to avoid nesting functions
    for(int i = 1 ; i <= 10 ; i++)
    {
        cout << setw(3) << i << " seconds" << "\t" << setw(6) << fallingDistance(i) << " Meters" << endl;
    }
    return 0;
}

// Used to calculate distance from time
float fallingDistance(int intTime)
{
    float fltDistance;
    
    fltDistance = .5 * 9.8 * pow(intTime, 2.0f);
    
    return fltDistance;
}

