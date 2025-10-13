#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<functional> //must include to use wrapper
#include<string>

#include "practice.h"

using namespace std;

//functor
class Greeter {
public:
	string prefix;

	void operator()(const string& name) {
		cout << prefix << ".." << name << endl;
	}
};

//another functor
class SayBye {
public:
	string text;

	SayBye(string text) {
		this->text = text;
	}

	void operator()(const string& name) {
		cout << text << ".." << name << endl;
	}
};

void greet(const string& name) {
	cout << "Hello " << name <<", Welcome!" <<endl;
}

void practice() {

	//function wrapper
	function<void(const string&)>greetWrapper;
	
	greetWrapper = greet;

	greetWrapper("Steve");

	//lambda wrapper-------------------------------------------------------------------
	function<int(int, int)>calculator;

	//a lambda expression being stored in the wrapper calculator
	calculator = [](int a, int b) {
		return a + b;
	};

	//calling the wrapper
	int sum = calculator(10, 5);
	cout << "Summation: " << sum << endl;

	//assigning a different lambda with same parameter and return type to the same wrapper
	calculator = [](int a, int b) {
		return a * b;
	};

	//calling the second wrapper
	int product = calculator(10, 5);
	cout << "Product: " << product << endl;
	//----------------------------------------------------------------------------------


	//functor wrapper

	//an instance of functor Greeter
	Greeter morning_greeter = { "Good Morning" };

	//wrapping the Greeter functor
	function<void(const string& name)>functor_wrapper;

	functor_wrapper = morning_greeter;

	morning_greeter("Jon");

	//another functor_wrapper
	function<void(const string&)> bye_wrapper = SayBye("See you later");
	bye_wrapper("Thor");
}