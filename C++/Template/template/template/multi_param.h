#include<iostream>
#include<string>
#include<typeinfo>

using namespace std;

template<typename Str, typename Num>
class Movie {
	Str text;
	Num number;

public:
	static size_t counter; //class variable- static member

	Movie(Str text, Num number);
	void getObjectType();
	void display();
};

template<typename Str,typename Num>
size_t Movie<Str, Num>::counter = 0;

template<typename Str, typename Num>
Movie<Str,Num>::Movie(Str text,Num number) {
	this->text = text;
	this->number = number;
	Movie<Str, Num>::counter++;
}


template<typename Str, typename Num>
void Movie<Str, Num>::getObjectType() {
	cout << "Object Type : \n";
	cout << typeid(*this).name() << endl;
}

template<typename Str, typename Num>
void Movie<Str, Num>::display() {
	cout << text << " " << "(" <<number <<")" << endl;
}

//----------------------------------------
template<typename myType>
class ShowTwice {
	myType data;
public:
	static int count;
	ShowTwice(myType data);
	void show();
};

//static variable
template<typename myType>
int ShowTwice<myType>::count = 0;

//constructor
template<typename myType>
ShowTwice<myType>::ShowTwice(myType data) {
	this->data = data;
	ShowTwice<myType>::count++;
}

//show()
template<typename myType>
void ShowTwice<myType>::show() {
	cout << "Data: " << data << "<->"<< data << endl;
}


//speciallizing for double type
template<>
class ShowTwice<double> {
	double data;
public:
	ShowTwice(double data) {
		this->data = data;
	}

	void show() {
		cout << "Square of " << data << ": " << data * data << endl;
	}
};

