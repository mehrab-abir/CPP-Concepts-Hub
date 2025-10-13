#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>

using namespace std;

class Student {
public:
	string name;
	int roll;
	char section;
	double math_marks;
	int cls;
};

int main() {

	Student Rohim, Korim, Jobbar;

	cout << "Rohim's Info:" << endl;

	cout << "Enter Rohim's full name: ";
	getline(cin, Rohim.name);
	cout << "Section: ";
	cin >> Rohim.section;
	cout << "Roll: ";
	cin >> Rohim.roll;
	cout << "Math marks: ";
	cin >> Rohim.math_marks;
	cout << "Class: ";
	cin >> Rohim.cls;
	cin.ignore();

	cout << "Korim's Info:" << endl;

	cout << "Enter Korim's full name: ";
	getline(cin, Korim.name);
	cout << "Section: ";
	cin >> Korim.section;
	cout << "Roll: ";
	cin >> Korim.roll;
	cout << "Math marks: ";
	cin >> Korim.math_marks;
	cout << "Class: ";
	cin >> Korim.cls;
	cin.ignore();

	cout << "Jobbar's Info:" << endl;

	cout << "Enter Jobbar's full name: ";
	getline(cin, Jobbar.name);
	cout << "Section: ";
	cin >> Jobbar.section;
	cout << "Roll: ";
	cin >> Jobbar.roll;
	cout << "Math marks: ";
	cin >> Jobbar.math_marks;
	cout << "Class: ";
	cin >> Jobbar.cls;

	if (Rohim.math_marks > Korim.math_marks) {
		if (Rohim.math_marks > Jobbar.math_marks) {
			cout << "Maximum marks: Rohim >> " << Rohim.math_marks << endl;
		}
		else {
			cout << "Maximum marks: Jobbar >> " << Jobbar.math_marks << endl;
		}
	}
	else if (Korim.math_marks > Rohim.math_marks) {
		if (Korim.math_marks > Jobbar.math_marks) {
			cout << "Maximum marks: Korim >> " << Korim.math_marks << endl;
		}
		else {
			cout << "Maximum marks: Jobbar >> " << Jobbar.math_marks << endl;
		}
	}

	return 0;
}
