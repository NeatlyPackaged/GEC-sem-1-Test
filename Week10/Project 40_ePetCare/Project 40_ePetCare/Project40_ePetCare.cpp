// Project40_ePetCare.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Project40_ePetCare.h"
#include <string>
using namespace std;


//This starts the inital hunger andf boredom of your pet
Pet::Pet(int initialHunger, int initialBoredom)
{
    cout << "Say hello to your new pet! " << endl;
    hunger = initialHunger;
    boredom = initialBoredom;
}

//Over time will gradually increase the pets hunger and boredom
void Pet::PassingTime(int time)
{
    hunger += time;
    boredom += time;
}

//This will return the value of hunger and boredom and collects the mood.
int Pet::GetMood(int moodOffset)
{
    return hunger + boredom + moodOffset;
}

// This will determine the pets mood based on the class above
void Pet::Talk()
{
    cout << "Your Pet is: ";
    if (GetMood(0) > 15)
    {
        cout << "Angry." << endl;
    }
    else if (GetMood(0) > 10)
    {
        cout << "Annoyed." << endl;
    }
    else if (GetMood(0) > 5)
    {
        cout << "Content." << endl;
    }
    else
    {
        cout << "Happy." << endl << endl;
    }
    PassingTime();
}

//This system is repeated for all pets you choose, like this dog
void Dog::Talk()
{
    cout << "Your Dog is: ";
    if (GetMood(0) > 21)
    {
        cout << "Angry." << endl;
    }
    else if (GetMood(0) > 14)
    {
        cout << "Annoyed." << endl;
    }
    else if (GetMood(0) > 7)
    {
        cout << "Content." << endl;
    }
    else
    {
        cout << "Happy." << endl << endl;
    }
    PassingTime();
}

//The Cats mood
void Cat::Talk()
{
    cout << "Your Cat is: ";
    if (GetMood(0) > 12)
    {
        cout << "Angry." << endl;
    }
    else if (GetMood(0) > 8)
    {
        cout << "Annoyed." << endl;
    }
    else if (GetMood(0) > 4)
    {
        cout << "Content." << endl;
    }
    else
    {
        cout << "Happy." << endl << endl;
    }
    PassingTime();
}

//The Hamsters mood
void Hamster::Talk()
{
    cout << "Your Hamster is: ";
    if (GetMood(0) > 18)
    {
        cout << "Angry." << endl;
    }
    else if (GetMood(0) > 12)
    {
        cout << "Annoyed." << endl;
    }
    else if (GetMood(0) > 6)
    {
        cout << "Content." << endl;
    }
    else
    {
        cout << "Happy." << endl << endl;
    }
    PassingTime();
}

// This will let you play with your dog to lower its boredome
void Pet::Play(int fun)
{
    cout << "You spent some time with your Pet and played with it!" << endl << endl;
    if (boredom - fun >= 0)
        boredom -= fun;
    else
        boredom = 0;
    PassingTime();
}

//This will feed the dog, lowering its hunger
void Pet::Feed(int food)
{
    cout << "You gave your pet some yummy food!" << endl;
    if (hunger - food >= 0)
        hunger -= food;
    else
        hunger = 0;
    PassingTime();
}



//This is the main menu where you will be given the options to feed, play or talk with your pet and will repeat if you chose an invalid answer
void Menu(Pet*& pet)
{
    string choice;
    cout << "Main Menu: " << endl << "(1) Feed your Pet " << endl << "(2) Play with your Pet " << endl << "(3) Talk with your Pet " << endl << "(4) Exit Program " << endl;
    getline(cin, choice);
    switch (choice[0])
    {
    case '1':
        pet->Feed();
        Menu(pet);
        break;
    case '2':
        pet->Play();
        Menu(pet);
        break;
    case '3':
        pet->Talk();
        Menu(pet);
        break;
    case '4':
        cout << "Exiting Program. " << endl;
        break;
    default:
        cout << "Invalid Choice. Please enter; 1, 2, 3 or 4." << endl;
        Menu(pet);
        break;
    }
}

//This will start the program letting you choose an animal to keep. This also uses the h script to keep the information about the animals.
int main()
{
    Pet* pet;
    cout << "Welcome to the pet shop! Which pet would you like? Your options are dog, cat or hamster." << endl;
    string petChoice;
    bool choice = false;
    while (!choice)
    {
        getline(cin, petChoice);
        for (int i = 0; i < petChoice.length(); i++)
        {
            petChoice[i] = tolower(petChoice[i]);
        }
        choice = true;
        if (petChoice == "dog")
        {
            pet = new Dog;
        }
        else if (petChoice == "cat")
        {
            pet = new Cat;
        }
        else if (petChoice == "hamster")
        {
            pet = new Hamster;
        }
        else
        {
            cout << "Err, Sorry. We don't have that kind of pet. Only cats, dogs, and hamsters. " << endl;
            choice = false;
        }
    }
    Menu(pet);

    return(0);
}
