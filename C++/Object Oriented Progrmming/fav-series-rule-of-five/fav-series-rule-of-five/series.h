#ifndef SERIES_H
#define SERIES_H

#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>

using namespace std;

class FavSeries {
	string* name;
	char* genre;
	int seasons;

public:

	//constructor
	FavSeries(string name, const char* genre, int seasons);

	//copy constructor
	FavSeries(const FavSeries& src);

	//copy assignment operator
	FavSeries& operator=(const FavSeries& src);

	//move constructor
	FavSeries(FavSeries&& src);

	//move assignment operator
	FavSeries& operator=(FavSeries&& src);

	//destructor
	~FavSeries();

	void display();
};




#endif