

#include <iostream>
using namespace std;
int main()
{
    /*int i = 0;
    while (i < 10)
    {
        cout << "i = " << i << endl;
        i++;
    }*/

    /*for (int i = 0; i < 10; i++)
    {
        //Output the current line
        cout << "Line: " << i << endl;

        //Nested loop to output 10 numbers.
        for (int j = 0; j < 10; j++)
            cout << j << " ";

        //Move on to the line below
        cout << endl;
    }*/


   /*for (int i = 0; i < 10; i++)
    {
        //Break out of this loop
        if (i == 3)
            break;
    }*/

    /*for (int i = 0; i < 10; i++)
    {
        //Skip iteration 3 of this loop
        if (i == 3)
            continue;

        //Output i so we can see if 3 gets output
        cout << "i = " << i << endl;
    }*/
    //for (int i = 0; i < 10; i++)
    //{

    //}
    //while (true)
    //{

    //}
    //do
    //{

    //} while (true);

    float input1;
    float input2;
    float input3;
    float addAverage = 2;
    cin >> input1;
    cout << "Input 1 = " <<input1 << endl;
    cin >> input2;
    cout << "Input 2 = " << input2 << endl;
    
    int total = input1 + input2;
    cout << "Input 1 + Input 2 = " << total << endl;
    float average = total /2;
    cout << "Average of Both inputs total is = " << average << endl;

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


