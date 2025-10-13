#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<cstring>

#include "core.h"

using namespace std;

int main() {
	Nolan SpaceMission("Interstellar", 2014);

	cout << "SpaceMission Movie:\n";
	SpaceMission.displayInfo();

	//---------
	Nolan DreamMission("Inception", 2010);

	cout << "DreamMission Movie:\n";
	DreamMission.displayInfo();

	//---------
	Nolan TimeMission = SpaceMission; //copy constructor works here

	cout << "TimeMission Movie:\n";
	TimeMission.displayInfo(); //without changing name and year

	TimeMission.setNameYear("Tenet", 2020);

	cout << "TimeMission Movie:\n";
	TimeMission.displayInfo(); //after changing name and year

	//---------
	Nolan BioPic("Oppenheimer", 2023);

	cout << "BioPic Movie:\n";
	BioPic.displayInfo();

	//---------
	Nolan MagicMission("The Prestige", 2006);
	
	cout << "MagicMission Movie:\n";
	MagicMission.displayInfo();

	//---------
	Nolan Illusion("Temp", 0000);

	cout << "Temporary Object:\n";
	Illusion.displayInfo();

	Illusion = MagicMission; //copy assignment works here
	//now, Illusion has everything same as MagicMission

	//after
	cout << "Illusion/MagicMission Movie:\n";
	Illusion.displayInfo(); //The Prestige

	//---------
	Nolan Crime("The Dark Knight", 2008);
	Crime.setGenre("Crime/Thriller");

	cout << "Crime Movie:\n";
	Crime.displayInfo();

	//---------

	Nolan Action = move(Crime); //move constructor works here

	cout << "Action Movie:\n";
	Action.displayInfo(); //before changing name, year, genre, so it's same as Crime

	//**
	Action.setNameYear("The Dark Knight Rises", 2012);
	Action.setGenre("Action/Thriller");

	//after changing name, year and genre
	cout << "Action Movie:\n";
	Action.displayInfo();


	//---------
	Nolan Memory("Memento", 2000);

	cout << "Memory:\n";
	Memory.displayInfo();

	//move assignment works here
	Crime = move(Memory); //Memory's content moved to Crime. now, Memory is empty

	cout << "Crime Movie:\n";
	Crime.displayInfo(); //should display Memento

	return 0;
}