// Program 11_DoomDifficulty.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    // The beginning Output that shows a list of difficulty
    int difficultyChoice;
    cout << "Please choose your difficulty:" << endl;
    cout << "******************************" << endl;
    cout << "1.	I'm too young to die!" << endl;
    cout << "2.	Hey, not too rough!" << endl;
    cout << "3.	Hurt me plenty." << endl;
    cout << "4.	Ultra - Violence." << endl;
    cout << "5.	Nightmare..." << endl;
    cout << "******************************" << endl;

    // User Input For the Difficulty
    cin >> difficultyChoice;

    // A detection of either numbers 1-5 that will display a message assigned to the numbers
    switch (difficultyChoice)
    {
    case 1:
        cout << "What are you, Afraid of a fight?" << endl;
        break;
    case 2:
        cout << "You coward, go even further then beyond!" << endl;
        break;
    case 3:
        cout << "Ooh I bet you like this difficulty" << endl;
        break;
    case 4:
        cout << "Your really gonna wanna strap in and grab a puke bag"<< endl;
        break;
    case 5:
        cout << "Welcome to my world" << endl;
        break;
    }
        
}

