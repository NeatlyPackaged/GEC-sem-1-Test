// Replacing_Characters.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    //Prints text to start
    cout << "Please Enter a sentence: " << endl;

    //Collects inputs of over 256 numbers/letters
    string sentence;
    string replacement = "x";
    cin >> sentence >> endl;



    sentence.replace(sentence.find("e"), replacement);
    
    cout << sentence << endl;

    return 0;
}
