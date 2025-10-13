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

Student korimInfo() {
	Student korim(5, 102, 4.85);

	return korim; // it will work
}

int main() {
	Student rohim(5, 101, 4.56);
	

	cout << "Rohim's Info:" << endl;
	cout << "Class: " << rohim.cls << "\nID: " << rohim.id << "\nGPA: " << rohim.gpa << endl;

	cout << endl;

	Student korim = korimInfo();

	cout << "\nKorim's Info:" << endl;
	cout << "Class: " << korim.cls << "\nID: " << korim.id << "\nGPA: " << korim.gpa << endl;

	return 0;
}
