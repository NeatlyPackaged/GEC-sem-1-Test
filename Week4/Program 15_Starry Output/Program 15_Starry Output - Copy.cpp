// Program 15_Starry Output.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{

	char starDigit = '*';
	int inputNumber = 0;

	while (true)
	{
		cout << "Enter a number between 1 and 10" << endl;
		cin >> inputNumber;

		string out;
		for (int i = 0; i < inputNumber; i++)
		{
			out += starDigit;
			cout << out << endl;
		}

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


