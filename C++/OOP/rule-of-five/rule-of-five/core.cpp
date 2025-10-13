#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<cstring>

#include "core.h"

using namespace std;

//constructor
Nolan::Nolan(const char* name, int year) {
	//memory allocation for 'name' which comes from the object creation
	this->name = new char[strlen(name) + 1]; 
	strcpy(this->name, name); //copying the variable (name) to the allocated memory

	this->year = year;

	const char* defaultGenre = "Sci-fi"; //local variable
	this->genre = new char[strlen(defaultGenre) + 1];
	strcpy(this->genre, defaultGenre); //defaultGenre is going to be source object's 'genre'

	this->director = "Christopher Nolan";
	this->country = new string("USA");
	this->current_year = 2025;
}

//copy constructor
Nolan::Nolan(const Nolan& src) {
	this->name = new char[strlen(src.name) + 1];
	strcpy(this->name, src.name);

	this->year = src.year;

	this->genre = new char[strlen(src.genre) + 1];
	strcpy(this->genre, src.genre);

	this->director = src.director;

	this->country = new string(*src.country);

	this->current_year = src.current_year;
}

//copy assignment operator
Nolan& Nolan::operator=(const Nolan& src) {
	if (this != &src) {
		delete[] name;
		delete[] genre;
		delete country;

		this->name = new char[strlen(src.name) + 1];
		strcpy(this->name, src.name);

		this->year = src.year;

		this->genre = new char[strlen(src.genre) + 1];
		strcpy(this->genre, src.genre);

		this->director = src.director;

		this->country = new string(*src.country);

		this->current_year = src.current_year;
	}
	return *this;
}

//move constructor
Nolan::Nolan(Nolan&& src) {
	this->name = src.name;
	src.name = nullptr;

	this->year = src.year;

	this->genre = src.genre;
	src.genre = nullptr;

	this->director = src.director;

	this->country = src.country;
	src.country = nullptr;

	this->current_year = src.current_year;
}

//move assignment operator
Nolan& Nolan::operator=(Nolan&& src) {
	if (this != &src) {
		delete[] name;
		delete[] genre;
		delete country;

		this->name = src.name;
		this->year = src.year;
		this->genre = src.genre;
		this->director = src.director;
		this->country = src.country;
		this->current_year = src.current_year;

		src.name = nullptr;
		src.genre = nullptr;
		src.country = nullptr;
	}
	return *this;
}

//destructor
Nolan::~Nolan() {
	delete[] name;
	delete[] genre;
	delete country;
}

void Nolan::setNameYear(const char* name, int year) {
	delete[] this->name; //deleting name for current object which is copied/moved from source obj

	this->name = new char[strlen(name)+1];
	strcpy(this->name, name);
	this->year = year;
}

void Nolan::setGenre(const char* genre) {
	delete[] this->genre; //deleting genre for current object which is copied/moved from source obj

	this->genre = new char[strlen(genre) + 1];
	strcpy(this->genre, genre);
}

void Nolan::displayInfo() {
	cout << "\n***[The value of 'current_year' is set to 2025 right now]***\n\n";
	cout << "Movie: " << name << endl;
	cout << "Year: " << year << "(Released " << current_year - year << " years ago)"<< endl;
	cout << "Genre: " << genre << endl;
	cout << "Director: " << director << endl;
	cout << "Country: " << *country << endl;

	cout << endl;
}