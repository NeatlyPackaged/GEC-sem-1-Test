// Program4_userDefinedVars.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    typedef int health;

    enum Weapons
    {
        SWORD = 1,
        DAGGER,
        MACE,
        TWIN_SWORDS,
        SAMURAI,
        WIZARD_STAFF,
        FIRE_POTION,
        ICE_BLADE,
        SMALL_KNIFE
    };

    health currentHealth;
    currentHealth = 13000;
    Weapons currentWeapon;
    currentWeapon = SAMURAI;

    cout << "My current health is: " << currentHealth << endl;
    cout << "And the ID of my weapon of choice is: " << currentWeapon << endl;

        
}

