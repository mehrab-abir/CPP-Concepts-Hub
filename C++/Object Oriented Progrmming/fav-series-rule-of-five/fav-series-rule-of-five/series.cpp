#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>

#include "series.h"

using namespace std;

FavSeries::FavSeries(string name, const char* genre, int seasons) {
	this->name = new string(name);

	this->genre = new char[strlen(genre) + 1];
	strcpy(this->genre, genre);

	this->seasons = seasons;
}

//copy constructor
FavSeries::FavSeries(const FavSeries& src) {
	this->name = new string(*src.name);

	this->genre = new char[strlen(src.genre) + 1];
	strcpy(this->genre, src.genre);

	this->seasons = src.seasons;
}

//copy assignment operator
FavSeries& FavSeries::operator=(const FavSeries& src) {
	if (this != &src) {
		delete name;
		delete[] genre;

		this->name = new string(*src.name);

		this->genre = new char[strlen(src.genre) + 1];
		strcpy(this->genre, src.genre);

		this->seasons = src.seasons;
	}
	return *this;
}

//move constructor
FavSeries::FavSeries(FavSeries&& src) {
	this->name = src.name;
	src.name = nullptr;

	this->genre = src.genre;
	src.genre = nullptr;

	this->seasons = src.seasons;
	src.seasons = 0; //not mandatory, as no dynamic memory involved in it, but okay to do this
}

//move assignemnt operator
FavSeries& FavSeries::operator=(FavSeries&& src) {
	if (this != &src) {
		delete name;
		delete[] genre;

		this->name = src.name;
		src.name = nullptr;

		this->genre = src.genre;
		src.genre = nullptr;

		this->seasons = src.seasons;
		src.seasons = 0; //not mandatory, as no dynamic memory involved in it, but okay to do this
	}
	return *this;
}

//destructor
FavSeries::~FavSeries() {
	delete name;
	delete[] genre;
}

void FavSeries::display() {
	if (this->name) {
		cout << "Name: " << *name << endl;
		cout << "Genre: " << genre << endl;
		cout << "Number of seasons: " << seasons << endl;
	}
	else {
		cout << "Object doesn't exist" << endl;
	}

	cout << endl;
}