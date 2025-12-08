#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>

#include "series.h"

using namespace std;

int main() {
	FavSeries A("Game of Thrones", "Fantasy", 8);

	A.display();

	//copying A to a newly created object
	FavSeries B = A; //copy constructor works here

	cout << "After copying A to newly created obj B, info for B:\n";
	B.display();

	cout << "Info for A again(intact):\n";
	A.display();

	//new obj C
	FavSeries C("Dark", "Sci-fi", 3);

	//copying/assigning C to B,,both objects already exist
	B = C; //copy assignment operator works here

	cout << "After copying/assigning C to B, info for B:\n";
	B.display(); //Dark

	cout << "After copying/assigning C to B, info for C:\n";
	C.display(); //Dark

	//new obj E
	FavSeries E("Breaking Bad", "Crime/Drama", 6);

	FavSeries F = move(E); //move constructor works here

	cout << "After moving E to newly created F, info for F:\n";
	F.display(); //Breaking Bad

	//E has become null
	E.display(); //Object doesn't exist

	//C and F already exist, C is Dark and F is Breaking Bad
	//Moving/assigning F to C
	C = move(F); //move assigning operator works here

	cout << "After moving/assigning F to C, info for C:\n";
	C.display(); //Breakig Bad

	//F doesn't exist anymore, as its content has been moved to C
	F.display(); //Object doesn't exist


	return 0;
}