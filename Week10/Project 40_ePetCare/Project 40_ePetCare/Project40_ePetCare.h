#ifndef PROJECT40_EPETCARE_H
#define PROJECT40_EPETCARE_H

//These are the stats for every pet, the only thing that changes is the hunger and boredom depending on the inputs in the main cpp script.
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

//This keeps the value of the Dog so the system can identify the animal you have chosen.
class Dog : public Pet
{
public:
	void Talk();

private:

};

//This keeps the value of the Cat so the system can identify the animal you have chosen.
class Cat : public Pet
{
public:
	void Talk();
private:

};

//This keeps the value of the Hamster so the system can identify the animal you have chosen.
class Hamster : public Pet
{
public:
	void Talk();
private:

};

#endif

