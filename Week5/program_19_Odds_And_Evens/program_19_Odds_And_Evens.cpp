// program_19_Odds_And_Evens.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//these are the outputs that show your total of odds and evens and displays the total odds and evens
void outputTheResult(int numberOdds, int totalOdds, int numberEvens, int totalEvens) 
{
	cout << "There was a total of " << numberOdds << " odd numbers, which had a total value of " << totalOdds << "." << endl;

	cout << "There was a total of " << numberEvens << " even numbers, which had a total value of " << totalEvens << "." << endl;
}

//this will detect if the number inputted is an odd or an even
bool isOdd(int num) 
{
	int results = num % 2;
	if (results == 1)
	{
		return true;

	}
	else
	{
		return false;
	}
}

int main()
{
	//this is to allow the player to input 10 numbers and it will detect if it is an odd or an even in the code above
	int arr[10];
	int numberOdds = 0, totalOdds = 0, numberEvens = 0, totalEvens = 0;
		for (int i = 0; i < 10; i++)
		{
			cout << "Enter a number " << endl;
			cin >> arr[i];
			if (isOdd(arr[i]) == true)
			{
				numberOdds++;
				totalOdds += arr[i];
			}
			else if (isOdd(arr[i]) == false)
			{
				numberEvens++;
				totalEvens += arr[i];
			}

	    

		}
		outputTheResult(numberOdds, totalOdds, numberEvens, totalEvens);
}



