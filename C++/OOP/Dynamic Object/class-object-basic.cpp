#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

class Student{
public:
	char name[100];
	int id;
	double gpa;

};

int main() {
	Student rohim, korim;

	char temp[100] = "Rohim Hussein";
	strcpy(rohim.name, temp);

	rohim.id = 101;
	rohim.gpa = 4.86;

	cout << "Rohim's Info:" << endl;
	cout << "Name: " << rohim.name << "\nID: " << rohim.id << "\nGPA: " << rohim.gpa << endl;

	cout << endl;


	//user inout for korim object
	cout << "Enter korim's full name: ";
	cin.getline(korim.name, 100);

	cout << "Korim's id: ";
	cin >> korim.id;

	cout << "Korim's gpa: ";
	cin >> korim.gpa;

	cout << "\nKorim's Info:" << endl;
	cout << "Name: " << korim.name << "\nID: " << korim.id << "\nGPA: " << korim.gpa << endl;

	return 0;
}
