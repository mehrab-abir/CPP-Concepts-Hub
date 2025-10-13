#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

class Footballer {
public:
	int jersyNum;
	string country;
};


int main() {
	Footballer* Kaka = new Footballer;
	Kaka->jersyNum = 10;
	Kaka->country = "Brazil";

	Footballer* Neymar = new Footballer;

	Neymar->jersyNum = Kaka->jersyNum;
	Neymar->country = Kaka->country;

	delete Kaka;

	cout << "Neymar: " << endl;
	cout << "Jersy Number: " << Neymar->jersyNum << endl;
	cout << "Country: " << Neymar->country << endl;

	return 0;
}
