#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<vector>

#include "relation.h"

using namespace std;

int main() {
	vector<Student>cs_students;
	vector<Student>eee_students;

	Person Jon("Jon Doe", 35);
	Jon.display();

	Teacher teacher1("Mr. Smith", 40, "Lecturer");
	Teacher teacher2("Mr. Jhon Sellens", 50, "Assistant Professor");

	teacher1.display();
	teacher2.display();

	Student student1("Abul", 25, "1012");
	cs_students.push_back(student1);

	Student student2("Babul", 24, "1011");
	eee_students.push_back(student2);

	Student daredeil("Matt Mardok", 23, "2010");
	cs_students.push_back(daredeil);

	Student thor("Thor Odinson", 24, "1111");
	eee_students.push_back(thor);

	student1.display();
	student2.display();


	//Creating a course object
	Teacher* cpp_teacher = new Teacher("Chris Patt", 35, "Professor");
	Course CPP("Intro to C++", "CPP111", cpp_teacher,cs_students);

	CPP.courseInfo();

	//another course
	//new teacer
	Teacher* physics_teacher = new Teacher("Rahat", 30, "Lecturer");
	Course Physics("Modern Physics", "PHY311", physics_teacher,eee_students);

	Physics.courseInfo();


	//Department object
	Department CS("Computer Science");

	CS.addTeacher(teacher2);
	CS.addTeacher(teacher1);

	CS.addCourse(CPP);
	CS.addCourse(Physics);

	CS.deptInfo();

	delete cpp_teacher;
	delete physics_teacher;

	return 0;
}
