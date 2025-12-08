#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>

#include "relation.h"

using namespace std;

Person::Person(string name, int age) {
	this->name = name;
	this->age = age;
}

void Person::display() {
	cout << "Person name: " << name << endl;
	cout << "Age: " << age << endl;

	cout << endl;
}

Teacher::Teacher(string name, int age, string teachingRole) :Person(name, age) {
	this->name = name;
	this->age = age;
	this->teachingRole = teachingRole;
}

void Teacher::display() {
	cout << "Teacher's info ---------->:\n";
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
	cout << "Designation: " << teachingRole << endl<<endl;
}

Student::Student(string name, int age, string id) :Person(name, age) {
	this->name = name;
	this->age = age;
	this->id = id;
}

void Student::display() {
	cout << "Student's info ---------->:\n";
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
	cout << "Student ID: " << id << endl;

	cout << endl << "-------------------------------------------------" << endl;
}

Course::Course(string courseName, string courseCode, Teacher* instructor, vector<Student>enrolled_students) {
	this->courseName = courseName;
	this->courseCode = courseCode;
	this->instructor = instructor;
	this->enrolled_students = enrolled_students;
}

void Course::courseInfo() {
	cout << "Course: " << courseName << " - " << courseCode << endl;
	cout << "Taught by -> ";
	instructor->display();

	cout << "\nEnrolled students in this course:\n";
	for (auto& student : enrolled_students) {
		cout << student.name << endl;
	}

	cout << "****************************************\n";
}

Department::Department(string deptName) {
	this->deptName = deptName;
}

void Department::addTeacher(Teacher t) {
	teachers.push_back(t);
}
void Department::addCourse(Course c) {
	courses.push_back(c);
}

void Department::deptInfo() {
	cout <<"****"<< deptName << "*****" << endl;

	cout << "Instructors:\n";
	for (int i = 0; i < teachers.size(); i++) {
		cout << "\t";
		teachers[i].display();
	}
	cout << "--------------------------------" << endl;

	cout << "Courses\n";
	for (int i = 0; i < courses.size(); i++) {
		cout << "\t";
		courses[i].courseInfo();
	}
	cout << "--------------------------------" << endl;
}