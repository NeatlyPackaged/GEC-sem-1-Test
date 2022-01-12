// Program 43_ToTenScores.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>

using namespace std;

struct Score
{
	string name;
	int score;
};

//This will open a new scores file that collects the information you input
void Open(Score* scores[10])
{
	string Line;
	ifstream inFile;
	int i = 0;
	inFile.open("scores.txt");
	if (inFile.is_open()) {
		int i = 0;
		while (getline(inFile, Line))
		{
			scores[i]->score = stoi(Line.substr(Line.find('|') + 1, Line.length() - Line.find('|') - 1));
			scores[i]->name = Line.substr(0, Line.find('|'));
			i++;
		}
	}
	inFile.close();
}

//Will output the score
string Output(Score* scores[10])
{
	string scoresString = "";
	for (int i = 0; i < 10; i++)
	{
		if (scores[i] != nullptr)
		{
			scoresString.append(scores[i]->name + "|" + to_string(scores[i]->score) + "\n");
		}
	}
	return(scoresString);
}


void Write(Score* scores[10])
{
	ofstream outFile;
	outFile.open("scores.txt");
	outFile << Output(scores);
	outFile.close();
}

//This let the player enter a value of score points and will save them into the file
void Enter(Score* scores[10])
{
	Score userScore;
	Score tempScore;

	bool userScorePlaced = false;
	cout << "Enter your name: " << endl;
	getline(cin, userScore.name);
	cout << "Enter your score: " << endl;
	cin >> userScore.score;
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	Open(scores);

	for (int i = 0; i < 10; i++)
	{
		if (scores[i] != nullptr)
		{
			if (userScore.score > scores[i]->score)
			{
				Score tempScore = userScore;
				userScore.name = scores[i]->name, userScore.score = scores[i]->score;
				scores[i]->name = tempScore.name, scores[i]->score = tempScore.score;
			}
		}
		else
		{
			if (!userScorePlaced)
			{
				scores[i] = &userScore;
				userScorePlaced = true;
			}
			i = 10;
		}
	}
	Write(scores);
}

//This will display the score and wont do so if the file does not exist
void DisplayScores(Score* scores[10])
{
	string scoreString;
	Open(scores);
	for (int i = 0; i < 10; i++)
	{
		if (!scores[i]->name.empty())
		{
			scoreString.append(scores[i]->name + "|" + to_string(scores[i]->score) + "\n");
		}
	}
	if (!scoreString.empty())
	{
		cout << scoreString;
	}
	else
	{
		cout << "No files found. ";
	}
	cout << "Press Enter to continue." << endl;
	cin;
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

//This will start the main menu section that will let the player choose 1-3 and will then start using the other classes based on the choice.
void MainMenu()
{
	Score* scores[10];
	for (int i = 0; i < 10; i++)
	{
		scores[i] = new Score;
	}

	string choice;
	cout << "Main Menu: " << endl << "1. Enter a Score " << endl << "2. Display Scores " << endl << "3. Exit " << endl;
	getline(cin, choice);
	switch (choice[0])
	{
	case'1':
		Enter(scores);
		MainMenu();
		break;
	case'2':
		DisplayScores(scores);
		MainMenu();
		break;
	case'3':
		break;
	default:
		cout << "Invalid Selection. Enter one of the valid menu selections. (1, 2, or 3.)" << endl;
		MainMenu();
		break;
	}
}

//This will start the program with the main menu
int main()
{
	MainMenu();
	return 0;
}
