#include <iostream>
using namespace std;

int main()
{
    int count;
    cout << "enter a number : " << endl;
    cin >> count;
    for (int i = 1; i < count; i++)
    {
        cout << i;
        if (i % 2 == 0) 
            cout << " is an Odd Number" << endl;
        else
            cout << " is an even Number" << endl;
    }

    // Pause the output
    cin.get();
    return 0;
}
