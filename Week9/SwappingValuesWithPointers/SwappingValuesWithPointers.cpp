// SwappingValuesWithPointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void swap(int* pNum1, int* pNum2);
{
    int temp;

    cout << "\nSWAP: Before swap." << endl;
    cout << "pNum1 = " pNum1 << endl;
    cout << "pNum2 = " pNum2 << endl;

    temp = *pNum1;
    *pNum2 = *pNum2;
    *pNum2 = temp;

    cout << "\nSWAP: After swap." << endl;
    cout << "pNum1 = " *pnum1 << endl;
    cout << "pNum2 = " *pnum2 << endl;


    return 0;
}
int main()
{
    int num1 = 5, num2 = 10;

    cout << "MAIN; Before swap." << endl;
    cout << "Num1 = " num1 << endl;
    cout << "Num2 = " num2 << endl;

    swap(&num1, &num2);

    cout << "\nMAIN; After swap." << endl;
    cout << "Num1 = " num1 << endl;
    cout << "Num2 = " num2 << endl;

    cin.get();

    return 0;
}
