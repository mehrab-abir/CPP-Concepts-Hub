#define CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<typeinfo>
#include<string>

#include "multi_param.h"
#include "specialization.h"

using namespace std;

//function template
template<typename T>
void print(T data) {
	cout << data << " > Type: [" << typeid(data).name() <<"]"<< endl;
}

//class template
template<typename Type>
class MovieDirector {
	Type data;
public:
	static size_t count;       // Static variable (per type)

	MovieDirector();                     // Default constructor
	MovieDirector(const Type& data);      // Parameterized constructor
	void getObjectType();
	void display() const;
};

template<typename Type>
size_t MovieDirector<Type>::count = 0;
//jekunu akta specific type er koyta object ase, seta count korar jonno

template<typename Type>
MovieDirector<Type>::MovieDirector() {
	data = Type(); //not mandatory here
	MovieDirector<Type>::count++;
}

template<typename Type>
MovieDirector<Type>::MovieDirector(const Type& name) {
	data = name;
	MovieDirector<Type>::count++;
}

template<typename Type>
void MovieDirector<Type>::getObjectType() {
	cout <<"Object type: \n"<< typeid(*this).name() << endl; 
}

template<typename Type>
void MovieDirector<Type>:: display() const {
	cout << data << endl;
}

int main() {

	/*print("Hello");
	print(10);
	print(13.25);
	print("a");*/


	//class templete objects
	MovieDirector<string> Nolan("Interstellar");
	MovieDirector<string> Scorsese("Shutter Island");

	cout <<"Number of directors taken: "<< MovieDirector<string>::count << endl;
	Nolan.display();
	Scorsese.display();
	cout << endl;

	MovieDirector<string>Hitchcock("Rear Window");

	//string type er koyta object ache tar count
	cout << "Number of directors taken: " << MovieDirector<string>::count << endl;

	Hitchcock.display();

	cout << endl;

	MovieDirector<int>directorID[5];
	MovieDirector<double>foo[4];

	//int type er koyta object ache tar count
	cout << "Number of director id: " << MovieDirector<int>::count << endl;

	cout << endl;

	cout << "Nolan > \n";
	Nolan.getObjectType();
	cout << endl;

	cout << "directorID[0] > \n";
	directorID[0].getObjectType();
	cout << endl;

	//double type er koyta object ache tar count
	cout << "Number of Foo: " << MovieDirector<double>::count << endl;
	cout << endl;

	cout << "foo[2] > \n";
	foo[2].getObjectType();
	cout << endl;

	//from multi-param
	Movie<string,int>M1("Inception", 2010);

	M1.display();

	cout << "M1 > ";
	M1.getObjectType();

	cout << endl;

	Movie<string, int>M2("Rear Window", 1954);
	M2.display();

	cout << "Number of movies: " << Movie<string, int>::counter << endl;

	cout << endl;
	//template specialization

	Printer<int>num(10); //normal
	num.display();


	//specialized
	Printer<string>Car("Mercedes");
	Car.display();

	Printer<double>dblNum(12.75);
	dblNum.display();

	return 0;
}