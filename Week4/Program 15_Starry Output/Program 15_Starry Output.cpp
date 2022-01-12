// Program 15_Starry Output.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	// creates a reference to what the star digit is
	char starDigit = '*';
	int inputNumber = 0;

	//while the restart is always set to true, the system will ask for an input between 1 and 10 and will let the player input so the system could change the number to stars
	while (true)
	{
		//the output and input of the number of stars you want
		cout << "Enter a number between 1 and 10" << endl;
		cin >> inputNumber;

		string out;
		for (int i = 0; i < inputNumber; i++)
		{
			out += starDigit;
			cout << out << endl;
		}
		// this will display a text that asks if the user wants to enter another number or wants to quit
		while (true)
		{
			char endOfDialogue;
			cout << "Would you like to have another go?" << endl;
			cin >> endOfDialogue;

			if (endOfDialogue == 'y')
			{
				cout << "Reloading" << endl;
				break;

			}
			else if (endOfDialogue == 'n')
			{
				cout << "Farewell" << endl;
				return 0;

			}
			else
			{
				cout << "Press Y/N to restart or stop" << endl;
			}
		}
	}
	

	
}


