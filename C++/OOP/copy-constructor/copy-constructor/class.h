#ifndef CLASS_H
#define CLASS_H

#include<iostream>
#include<string>

using namespace std;

//class without dynamic memory allocation
class SuperHero {
private:
	string name;
	int age;
	string movie;

public:
	SuperHero(string name, int age, string movie);

	//copy constructor- to make a deep copy of an object to another object
	SuperHero(const SuperHero& other);

	void display();
};

//class with dynamic memory allocation
class Deep {
private:
	int* data;

public:
	Deep(int data);

	//copy constructor -- deep copy of an object into another object
	Deep(const Deep& other);

	~Deep();

	void display();
};


//class Movie
class Movie {
	string* name;
	string* genre;

public:
	Movie(string name);

	Movie(const Movie& src);

	~Movie();

	//function to set different movie name for each new object
	void setName(string name);

	void display();
};


//Class Player--file cstring.cpp
class Player {
	char* name;

public:
	Player(const char* playerName);

	Player(const Player& src);

	~Player();

	void display();
};

#endif

