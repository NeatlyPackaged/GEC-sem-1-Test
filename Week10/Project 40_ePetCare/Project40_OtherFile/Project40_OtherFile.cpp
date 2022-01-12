// Project40_OtherFile.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#ifndef PROJECT40_OTHERFILE_H
#define PROJECT40_OTHERFILE_H

class Pet
{
public:
	Pet(int initialHunger = 4, int initialBordom = 4);
	virtual void Talk();
	void Feed(int food = 4);
	void Play(int fun = 4);
private:
	int hunger;
	int boredom;
protected:
	int GetMood(int moodOffset = 0);
	void PassingTime(int time = 1);
};


class Dog : public Pet
{
public:
	void Talk();

private:

};


class Cat : public Pet
{
public:
	void Talk();
private:

};


class Hamster : public Pet
{
public:
	void Talk();
private:

};

#endif
