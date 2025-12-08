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

/*
There will be only garbage values in output - because static object is deleted automatically after the function is
returned, when the object is kept in a pointer--so we need dynamic object
*/
//using pointer, because it is returning a pointer
Student* korimInfo() {
	Student korim(5, 102, 4.85);

	Student* korimPointer = &korim; //keeping korim's address in a pointer

	return korimPointer;  //returning that pointer
} 

int main() {

	/*
	There will be only garbage values in output - because static object is deleted automatically after the function is
	returned, when the object is kept in a pointer--so we need dynamic object
	*/

	Student* korim = korimInfo(); //as the function returning a pointer, it is receiving a pointer also, so use *

	cout << "\nKorim's Info:" << endl;

	//use either dereferencing operation or arrow sign, as korim is a pointer
	cout << "Class: " << (*korim).cls << "\nID: " << korim->id << "\nGPA: " << korim->gpa << endl;

	return 0;
}
