#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<fstream>

using namespace std;

void printGreet(ostream& out,int year) {
	out << "Hello World.\nYear: "<<year << endl;
}

void print(ostream& out, int year) {
	out << "Current Year: " << year << endl; //will print in file
}

int main() {

	printGreet(cout, 2025);

	//print in file
	ofstream file("output.txt");

	print(file, 2025); //will print in file

	file.close();

	return 0;
}
