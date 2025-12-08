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

//it will now work perfectly, because dynamic object is not deleted automatically after returning the function
//using * sign as it is returning a pointer
Student* rohimInfo() {
	Student* rohim = new Student(5, 120, 4.78); //dynamic object
	//now we don't need to keep rohim's address in a pointer, rohim is a pointer itself
	//as rohim is now a dynamic object

	return rohim;  
}

int main() {

	//if there is no constructor- dynamic object will be like this
	//Student* rohim = new Student;

	//when there is a constructor in the class
	Student* korim = new Student(5, 110, 4.50); //dynamic object
	cout << "\nKorim's Info:" << endl;

	//use either dereferencing operation or arrow sign, as korim is a pointer
	cout << "Class: " << (*korim).cls << "\nID: " << korim->id << "\nGPA: " << korim->gpa << endl;


	//rohim
	Student* rohim = rohimInfo();

	cout << "\nRohim's Info:" << endl;
	cout << "Class: " << rohim->cls << "\nID: " << rohim->id << "\nGPA: " << rohim->gpa << endl;

	//must be deleted at the end
	delete rohim;
	delete korim;

	return 0;
}
