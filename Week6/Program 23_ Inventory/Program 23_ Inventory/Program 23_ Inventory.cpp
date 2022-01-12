// Program 23_ Inventory.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    // Number variable that collects the value of items.
    const int MAX_ITEMS = 4;
    int numItems = 0;
    // Variable of choice.
    char choice;
    // A collection of all items besides the Wizard's Staff.
    string inventory[MAX_ITEMS];
    inventory[numItems++] = "Sword";
    inventory[numItems++] = "Battle Axe";
    inventory[numItems++] = "Healing Potion";
    inventory[numItems++] = "Dagger";
    size_t n = sizeof(inventory) / sizeof(inventory[0]);

    // The dialogue start to give the player a prompt.
    cout << "You have picked up a wizard's staff. " << endl;
    cout << "Your inventory is currently full. Do you want to replace your " << inventory[numItems - 1] << " with the wizard's staff? Y/N" << endl;
    
    // Input for the choice of what option you want.
    cin >> choice;
    // Gives the player a Wizard Staff if they choose yes.
    if (choice == 'Y') {
        cout << "You chose to take the staff. " << endl;
        inventory[numItems - 1] = "wizard's staff";
    }
    // Does not accept the staff if they choose no.
    else {
        cout << "You chose to leave the item behind. " << endl;
    }
    // Updates the player inventory based on your choice.
    cout << "Your Current Inventory: " << endl;
    for (int i = 0; i < n; i++) {
        cout << inventory[i] << endl;
    }
}
