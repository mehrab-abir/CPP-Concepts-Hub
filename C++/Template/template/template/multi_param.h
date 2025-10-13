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


