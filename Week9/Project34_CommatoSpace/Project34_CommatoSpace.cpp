// Program_34_ReplacingCommaWithSpaces.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;


string commaIntoBlank(string myText)
{

	size_t pos = 0;
	while ((pos = myText.find(",", pos)) != string::npos) {
		myText.replace(pos, 1, " ");
		pos += 1;
	}
	return myText;
}

int main()
{
	system("cls");
	string myText;
	cout << " Enter a sentence and use commas instead of spaces " << endl;
	getline(cin, myText);
	cout << commaIntoBlank(myText);
	cin.get();
	return 0;
}