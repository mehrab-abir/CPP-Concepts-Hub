#ifndef RELATION_H
#define RELATION_H

#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Person {
public:
	string name;
	int age;

	Person(string name, int age);

	virtual void display();
};

//Teacher inherites Person ----Inheritance
class Teacher : public Person {
	string teachingRole;

public:
	Teacher(string name, int age, string teachingRole);
	void display() override;
};

//Student inherites Person --- Inheritance
class Student : public Person {
	string id;
public:
	Student(string name, int age, string id);

	string getId() {
		return id;
	}

	void display() override;
};

// Association
// A Course is associated with a teacher
// A Course is associated with a student as well
class Course {
	string courseName;
	string courseCode;
	Teacher* instructor;
	vector<Student>enrolled_students;
public:
	Course(string courseName, string courseCode, Teacher* instructor, vector<Student>enrolled_students);

	void courseInfo();
};


//Aggragation
// A department has many teachers, but teacher can be independent 

//Composition
// A department has many courses, courses don't exist without a department
class Department {
	string deptName;
	vector<Teacher>teachers; //for aggragation
	vector<Course>courses; //for composition
public:
	Department(string deptName);

	void addTeacher(Teacher t);
	void addCourse(Course c);

	void deptInfo();
};


#endif
