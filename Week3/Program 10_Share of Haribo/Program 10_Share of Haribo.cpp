// Program 10_Share of Haribo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    // Values to start the code
    int numberOfHaribo = 40;
    int howManyStudents = 14;
    
    // A function that will calculate the sum needed for 14 people shared
    int sumtotal = numberOfHaribo / howManyStudents;
    
    // This will then use that shared and times with the 14 people to get the sum of 28
    int newsumtotal = sumtotal * howManyStudents;
    
    // This Outputs the original value of how many Haribos will need to be shared to 14 people
    cout << "The amount of Haribos needed for each person of 14 is = "<< sumtotal << endl;
    
    // This will calculate the remaining Haribos that you will have left after sharing
    int newtotal = numberOfHaribo - newsumtotal;
   
    // Outputs the amount of Haribos for you
    cout <<"This leaves "<< newtotal <<" Haribos for you"<< endl;
    
    
}

