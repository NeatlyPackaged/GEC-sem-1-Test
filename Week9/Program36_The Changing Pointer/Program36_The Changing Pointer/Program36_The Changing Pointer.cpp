// Program36_The Changing Pointer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
using namespace std;

//This collects the inputs of the first and second number
void inputDetails(int* n1, int* n2) {
    cout << "Enter the first number" << endl;
    cin >> *n1;
    cout << "Enter the second number" << endl;
    cin >> *n2;
}

//This will output the value and address of both numbers
void outputDetails(int* n1, int* n2, int* p) {
    cout << "Num 1 Value: " << *n1 << endl;
    cout << "Num 1 Address in Memory: " << &n1 << endl;
    cout << "Num 2 Value: " << *n2 << endl;
    cout << "Num 2 Address in Memory: " << &n2 << endl;
    cout << "pNum Value: " << p << endl;
    cout << "pNum Dereferenced Value: " << *p << endl;
    cout << "pNum Address in Memory: " << &p << endl;
}


int main()
{
    int num1, num2;
    int* pNum = &num1;
    inputDetails(&num1, &num2);
    outputDetails(&num1, &num2, pNum);
    pNum = &num2;
    outputDetails(&num1, &num2, pNum);
}
