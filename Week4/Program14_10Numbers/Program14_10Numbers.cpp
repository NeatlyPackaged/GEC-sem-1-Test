

#include <iostream>
using namespace std;
int main()
{
    
    // variables for each input method and average beginner
    float input1;
    float input2;
    float input3;
    float addAverage = 2;
    //input the first number
    cin >> input1;
    //outputs the first number
    cout << "Input 1 = " <<input1 << endl;
    //input the second number
    cin >> input2;
    //outputs the second number
    cout << "Input 2 = " << input2 << endl;
    // creates a total of the two inputs and outputs the total
    int total = input1 + input2;
    cout << "Input 1 + Input 2 = " << total << endl;
    // starts the average of both inputs
    float average = total /2;
    cout << "Average of Both inputs total is = " << average << endl;

    // this will allow the player to input a new input everytime to add to the total and average and will only end when the player hits 0
    do
    {
        cin >> input3;
        float newTotal = total + input3;
        total = newTotal;
        cout << "total + newInput = " << newTotal << endl;
        float newAverage = newTotal / addAverage++;
        cout << "Average of All inputs total is = " << newAverage << endl;
    } while (input3 > 0);

}


