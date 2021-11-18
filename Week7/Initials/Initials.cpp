// Initials.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main()
{
    //Prints text to start
    cout << "Please Enter your first initial, then middle, and end with your full Surname: " << endl;

    //Collects inputs of over 256 numbers/letters
    char fullName[256];
    cin.getline(fullName, 256);

    // Treating the strings as streams we can perform extraction and insertion operation from/to string just like cin and cout streams
    istringstream ss(fullName);
    string del;
 
    cout << "Your Name Details Are: " << endl;
    //Outputs by removing all spaces and separating the full name variable into separate lines
    while(getline(ss, del, ' ')) {
        cout << del << '\n';
    }
   
    return 0;

}

