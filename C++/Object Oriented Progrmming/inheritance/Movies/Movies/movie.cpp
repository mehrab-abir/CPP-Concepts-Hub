#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>

#include "movie.h"

using namespace std;

Movie::Movie() {
	cout << "Movie constructor" << endl;
}

Movie::~Movie() {
	cout << "Movie Destructor" << endl;
}

//no implementation of the pure virtual function - movieList();

//Thriller -----------------------------------------------------
Thriller::Thriller() {
	cout << "Thriller movie constructor..." << endl;
	movies = new string[3]{
		"Shutter Island (2010)",
		"Gone Girl (2014)",
		"The Prestige (2006)"
	};
}

Thriller::~Thriller() {
	cout << "Destructor of Thriller movies..." << endl;
	delete[] movies;
}

void Thriller::movieList() {
	cout << "Thriller movie list: " << endl;
	for (int i = 0; i < 3; i++) {
		cout << i+1 << ": " << movies[i] << endl;
	}
	cout << endl;
}

//Scifi ---------------------------------------------------------
SciFi::SciFi() {
	cout << "Sci-Fi movie constructor..." << endl;
	movies = new string[3]{
		"Interstellar (2014)",
		"Inception (2010)",
		"Tenet (2020)"
	};
}
void SciFi::movieList() {
	cout << "Sci-fi movie list:" << endl;
	for (int i = 0; i < 3; i++) {
		cout << i+1 << ": " << movies[i] << endl;
	}
	cout << endl;
}

SciFi::~SciFi() {
	cout << "Destructor of SciFi movies..." << endl;

	delete[] movies;
}

//Drama ---------------------------------------------------------
Drama::Drama() {
	cout << "Drama movie constructor..." << endl;
	movies = new string[3]{
		"The Shawshank Redemption (1994)",
		"The Green Mile (1999)",
		"The Bucket List (2007)"
	};
}
void Drama::movieList() {
	cout << "Drama movie list: " << endl;
	for (int i = 0; i < 3; i++) {
		cout << i+1 << ": " << movies[i] << endl;
	}
	cout << endl;
}

Drama::~Drama() {
	cout << "Drama movie destructor..." << endl;
	delete[] movies;
}
