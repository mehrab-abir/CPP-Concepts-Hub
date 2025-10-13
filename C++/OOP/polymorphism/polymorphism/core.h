#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

class Shape {
public:
	virtual void draw();
};

class Circle : public Shape {
public:
	void draw() override;
};

class Triangle : public Shape {
public:
	void draw() override;
	void callBaseDraw();
};

class Rectangle : public Shape {
public:
	void draw() override;
};


void drawShape(Shape* s);

