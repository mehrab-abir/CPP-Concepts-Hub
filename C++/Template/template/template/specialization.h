#include<iostream>
#include<string>
#include<typeinfo>

using namespace std;

template<typename T>
class Printer {
	T data;
public:

	Printer(T data);

	void display();
};

template<typename T>
Printer<T>::Printer(T data) {
	this->data = data;
}

template<typename T>
void Printer<T>::display() {
	cout << "Data: " << data << endl;
}

//specialized member function for double type
template<>
void Printer<double>::display() {
	cout << "Specialized member function for double: " << data << endl;
}

//specialized class for string
template<>
class Printer<string> {
	string text;
public:
	Printer(string text) {
		this->text = text;
	}
	void display() {
		cout << "String: " << text << endl;
	}
};


