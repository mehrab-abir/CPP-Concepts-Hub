#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>

#include "movie.h"

using namespace std;

int main() {
	Movie* thriller = new Thriller;
	Movie* drama = new Drama;
	Movie* scifi = new SciFi;

	cout << endl;

	thriller->movieList();

	drama->movieList();

	scifi->movieList();

	cout << endl;

	delete thriller;
	delete drama;
	delete scifi;
	return 0;
}