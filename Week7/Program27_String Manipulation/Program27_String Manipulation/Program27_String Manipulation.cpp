// Program27_String Manipulation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Values of the names and a bool that detects if the name is long enough.
    bool longer = false;
    string name1, name2;
    string testString = "Do you know who loves C++ XX does!";
    // Starts the input for the name of the user.
    cout << "Enter a name: " << endl;
    cin >> name1;
    // The system that detects X and replaces it with the input name and then outputs.
    int pointer = testString.find("XX");
    cout << testString.insert(pointer + 1, name1, 0, name1.length()) << endl;
    int pointer2 = testString.find_last_of("X");
    pointer = testString.find_first_of("X");
    testString.erase(pointer, 1);
    testString.erase(pointer2 - 1, 1);
    cout << testString << endl;
    pointer = testString.find(name1);
    // A system that will detect if the name is long enough to work.
    while (!longer) {
        cout << "Enter a name. This must be longer than the previous name." << endl;
        cin >> name2;
        if (name1.length() < name2.length()) {
            longer = true;
        }
        else {
            cout << "Invalid entry." << endl;
        }
    }
    // Outputs the new replaced name.
    cout << testString.replace(pointer, name1.length(), name2) << endl;


}
