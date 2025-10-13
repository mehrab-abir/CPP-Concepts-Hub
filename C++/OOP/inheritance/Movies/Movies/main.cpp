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

	cout << "Thriller movie list: " << endl;
	thriller->movieList();

	cout << "Drama movie list: " << endl;
	drama->movieList();

	cout << "Sci-fi movie list:" << endl;
	scifi->movieList();

	cout << endl;

	delete thriller;
	delete drama;
	delete scifi;
	return 0;
}