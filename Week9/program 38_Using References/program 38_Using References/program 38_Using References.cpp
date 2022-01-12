// program 38_Using References.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//This will create a variable for adding 25
void add(int& rNum) {
    rNum += 25;
}

//This will create a variable for subtracting 25
void sub(int& rNum) {
    rNum -= 25;
}

int main()
{
    int num;
    int* rNum = &num;
    //This will start the process to add your input with the void Add class
    cout << "Enter a number: " << endl;
    cin >> num;
    cout << "Value of num = " << num << endl;
    add(*rNum);
    cout << "Value of num + 25 = " << num << endl;

    //This will start the process to subtract your input with the sub class
    cout << "Enter another number: " << endl;
    cin >> num;
    cout << "Value of num = " << num << endl;
    sub(*rNum);
    cout << "Value of num - 25 = " << num << endl;
}
