#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>

#include "core.h"

using namespace std;

int main() {
	Shape* circle = new Circle;
	Shape* rectangle = new Rectangle;
	Shape* triangle = new Triangle;

	drawShape(circle);
	drawShape(rectangle);
	drawShape(triangle);

	Shape defaultShape;

	cout << "\nCalling draw() through base class object which is a static object === >";
	defaultShape.draw();

	cout << "\n-----------------------\n";

	cout<<"\n\nCalling draw() through 'circle' which is a base class pointer pointing to a derived class's object - Circle ===>>";

	circle->draw();

	cout << "\n-----------------------\n";

	cout << "\nCalling draw() through 'rectangle' which is a base class pointer pointing to a derived class's object - Rectangle ===>>";
	rectangle->draw();

	cout << "\n-----------------------\n";

	cout << "\nCalling draw() through 'trainglee' which is a base class pointer pointing to a derived class's object - Triangle ===>>";

	triangle->draw();

	cout << "\n-----------------------\n";


	Shape commonShape;

	drawShape(&commonShape);

	Triangle* triObj = new Triangle();

	cout << "\nCalling base class method by derived class object 'triObj':: > ";
	triObj->callBaseDraw(); //calling base class version of the method by a derived class

	delete circle;
	delete rectangle;
	delete triangle;
	delete triObj;

	return 0;
}