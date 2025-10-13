#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>

#include "class.h"

using namespace std;

SuperHero::SuperHero(string name, int age, string movie) {
	this->name = name;
	this->age = age;
	this->movie = movie;
}

//copy constructor- to make a deep copy of an object to another object
SuperHero::SuperHero(const SuperHero& other) {
	this->name = other.name;
	this->age = other.age;
	/*
	other referes to the existing object(or source object), this->name referes to the new object that
	is being created from the existing/source object
	*/

	//setting the value for 'movie' manually, it's possible for custom copy constructor
	//so the data of the existing object is partially copied into the new object
	//as we are setting the value of one variable manually, here 'movie' ..this->movie
	this->movie = "Captain America- The First Avenger";

	cout << "Deep copy constructor called.\n";
}

void SuperHero::display() {
	cout << "Name: " << name << endl << "Age: " << age << endl;
	cout << "Movie: " << movie << endl;
	cout << endl;

	cout << "Memory address for " << name << ": " << endl;
	cout << "name: " << &name << endl;
	cout << "age: " << &age << endl;
	cout << "movie: " << &movie << endl;

	cout << endl;
}


//class - Deep
Deep::Deep(int data){
	this->data = new int(data);
}

//copy constructor -- deep copy of an object into another object
Deep::Deep(const Deep& other) {
	this->data = new int(*other.data); //allocate new memory and copy data
	/*
	other referes to the existing object(or source object), this->data referes to the new object that
	is being created from the existing/source object
	*/
	cout << "Copy constructor called" << endl;
}

Deep::~Deep(){
	delete data;
}

void Deep::display() {
	cout << "Data: " << *data << endl;
	cout << "Memory address: " << data << endl;

	cout << endl;
}



//Class- Movie
Movie::Movie(string name) {
	this->name = new string(name);

	this->genre = new string[2];

	genre[0] = "Sci-fi";
	genre[1] = "Action";
}

//copy constructor, --copy everything, then we use a setName() to give 'name' a different value
Movie::Movie(const Movie& src){
	this->name = new string(*src.name);
	this->genre = new string[2];
	this->genre[0] = src.genre[0];
	this->genre[1] = src.genre[1];
}

Movie::~Movie() {
	delete name;
	delete[] genre;
}

//function to set different movie name for each new object
void Movie::setName(string newName) {
	*name = newName;
}

void Movie::display() {
	cout << "Name: " << *name <<endl;
	cout << "Genre: [" << genre[0] << ", " << genre[1] << "]" << endl;

	cout << endl;
	cout << "Memory address: " << endl;
	cout << "Name: " << name << endl;
	cout << "Genre[0]: " << &genre[0] << endl;
	cout << "Genre[1]: " << &genre[1] << endl;

	cout << endl;
}
