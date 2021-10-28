// CondtionalTask1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int num1 = 12;
int num2 = 5;
int num3 = 7;
bool a = true;

int main()

{
    if (a)
        //single line of code

    //take the code below, we want the code
    //for num1 & num2 to be run if a is true
        bool a = true;
    if (a)
        num1++; // this will be run
        num2 += 5; //this wont as no braces & second line

   num3 *= 2;

   //the above is the same as
   if (a)
   {
       num1++;
   }
   num2 += 5;
   num3 *= 2;
   
   //the correct way is
   if (a)
   {
       num1++;
       num2 += 5; //now both lines will be run if a is true

   }
   num3 *= 2;

   
}

