#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

class Student {
public:
	int cls;
	int id;
	double gpa;

	Student(int cls, int id, double gpa) {
		this->cls = cls;
		this->id = id;
		this->gpa = gpa;
	}

};

int main() {
	Student rohim(5, 101, 4.56);
	Student korim(5, 102, 4.89);

	cout << "Rohim's Info:" << endl;
	cout << "Class: " << rohim.cls << "\nID: " << rohim.id << "\nGPA: " << rohim.gpa << endl;

	cout << endl;

	cout << "\nKorim's Info:" << endl;
	cout << "Class: " << korim.cls << "\nID: " << korim.id << "\nGPA: " << korim.gpa << endl;

	cout << endl;
	//user input
	//main purpose of constructor is to directly initilize variable, write less code, so user input is not useful here
	int hCls, hId;
	double Hgpa;

	cout << "Hashim's class: ";
	cin >> hCls;
	cout << "Hashim's id: ";
	cin >> hId;
	cout << "Hashim's gpa: ";
	cin >> Hgpa;

	Student hashim(hCls, hId, Hgpa); //but this is not useful, use constructor to directly initilize variables 

	cout << "\nHashim's Info:" << endl;
	cout << "Class: " << hashim.cls << "\nID: " << hashim.id << "\nGPA: " << hashim.gpa << endl;


	return 0;
}
