#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>

using namespace std;

//Base class
class Movie {
public:
	Movie();

	virtual void movieList() = 0;  //pure virtual function, no implementation

	/*the Movie class has become abstract because of pure virtual function, so we can not make object
	from it, it must be inherited*/

	/*
	An abstract class is a class that cannot be instantiated on its own — it is meant to be inherited
	from.
	*/


	virtual ~Movie();  //base class destructor should be virtual
};


//Derived classes
class Thriller : public Movie {
	string* movies;
public:
	Thriller();
	~Thriller();

	void movieList() override;
};

class SciFi : public Movie {
	string* movies;
public:
	SciFi();
	~SciFi();
	void movieList() override;
};

class Drama : public Movie {
	string* movies;
public:
	Drama();
	~Drama();
	void movieList() override;
};