#ifndef CORE_H
#define CORE_H

#include<string>
#include<cstring>

using namespace std;


class Nolan {
	char* name;
	int year;
	char* genre;
	string director;
	string* country;
	int current_year;

public:
	Nolan(const char* name, int year); //constructor
	Nolan(const Nolan& src); //copy constructor
	Nolan& operator=(const Nolan& src); //copy assignment operator

	Nolan(Nolan&& src); //move constructor
	Nolan& operator=(Nolan&& src); //move assignment operator

	~Nolan(); //destructor

	void setNameYear(const char* name, int year);
	void setGenre(const char* genre);
	void displayInfo();
};



#endif