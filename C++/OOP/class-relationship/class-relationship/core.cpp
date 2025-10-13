#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include "core.h"

using namespace std;

Person::Person(string n) {
    name = n;
}

void Person::setName(string n) {
    name = n;
}

string Person::getName() {
    return name;
}

void Person::display() {
    cout << "Name: " << name << endl;
}

Student::Student(string n) : Person(n) {}

void Student::display() {
    cout << "Student: " << name << endl;
}

Teacher::Teacher(string n) : Person(n) {}

void Teacher::display() {
    cout << "Teacher: " << name << endl;
}

Course::Course(string cName, Teacher* t) {
    courseName = cName;
    instructor = t;
}

void Course::setCourseName(string cName) {
    courseName = cName;
}

string Course::getCourseName() {
    return courseName;
}

void Course::showCourse() {
    cout << "Course: " << courseName << ", Taught by: ";
    instructor->display();
}


Department::Department(string name) {
    deptName = name;
}

void Department::setDeptName(string name) {
    deptName = name;
}

string Department::getDeptName() {
    return deptName;
}

void Department::addCourse(Course c) {
    courses.push_back(c);
}

void Department::addTeacher(Teacher* t) {
    teachers.push_back(t);
}

void Department::showTeachers() {
    cout << "\nTeachers in " << deptName << " Department:\n";
    for (int i = 0; i < teachers.size(); i++) {
        teachers[i]->display();
    }
}

void Department::showCourses() {
    cout << "\nCourses in " << deptName << " Department:\n";
    for (int i = 0; i < courses.size(); i++) {
        courses[i].showCourse();
    }
}