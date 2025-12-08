#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>

#include "core.h"

using namespace std;

int main() {
	Teacher* t1 = new Teacher("Mr. John");
	Teacher* t2 = new Teacher("Mr. Bran");

	//create department
	Department CS("Computer Science");

	// AGGREGATION: Add existing Teachers to Department
	CS.addTeacher(t1);
	CS.addTeacher(t2);

	// ASSOCIATION: Create Courses using Teacher references
	Course C1("Data Structure", t1);
	Course C2("Algorithm", t2);

	//Composition - departmennt owns the course
	CS.addCourse(C1);
	CS.addCourse(C2);

	CS.showTeachers();
	CS.showCourses();

	delete t1;
	delete t2;

	return 0;
}