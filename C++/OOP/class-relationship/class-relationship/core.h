#ifndef CORE_H
#define CORE_H


#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Person {
protected:
    string name;
public:
    Person(string n);
    void setName(string n);
    string getName();
    virtual void display();
};

class Student : public Person {
public:
    Student(string n);
    void display();
};

class Teacher : public Person {
public:
    Teacher(string n);
    void display();
};

class Course {
private:
    string courseName;
    Teacher* instructor;  // association
public:
    Course(string cName, Teacher* t);
    void setCourseName(string cName);
    string getCourseName();
    void showCourse();
};


class Department {
private:
    string deptName;
    vector<Course> courses;        // composition
    vector<Teacher*> teachers;     // aggregation
public:
    Department(string name);
    void setDeptName(string name);
    string getDeptName();
    void addCourse(Course c);
    void addTeacher(Teacher* t);
    void showTeachers();
    void showCourses();
};

#endif