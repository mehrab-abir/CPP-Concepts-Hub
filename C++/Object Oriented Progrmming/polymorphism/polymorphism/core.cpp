#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>

#include "core.h"

using namespace std;

//Polymorphic draw() function- takes many forms depending on the object type
void Shape::draw() {
	cout << "Drawing a Shape..." << endl;
}

void Circle::draw() {
	cout << "Drawing Circle..." << endl;
}

void Triangle::draw() {
	cout << "Drawing Triangle..." << endl;
}

void Triangle::callBaseDraw() {
	Shape::draw();  // Explicitly calling base class method
}


void Rectangle::draw() {
	cout << "Drawing Rectangle..." << endl;
}

void drawShape(Shape* s) {
	s->draw(); //Dynamic drawing
}