#ifndef TEMPLATE_H
#define TEMPLATE_H

#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>

using namespace std;

template<typename T1, typename T2>
class NumStr {
	T1 str;
	T2 num;
	
public:
	static int count;

	NumStr(T1 str, T2 num);

	void combine();
};

template<typename T1, typename T2>
int NumStr<T1, T2>::count = 0;

template<typename T1, typename T2>
NumStr<T1, T2>::NumStr(T1 str, T2 num) {
	this->str = str;
	this->num = num;

	count++;
}

template<typename T1, typename T2>
void NumStr<T1, T2>::combine() {
	cout << str << num << endl<<endl;
}

//specializing member function for double and int
template<>
void NumStr<double,int>::combine() {
	cout << "In specialized member function for floating numbers: "<<str + num << endl;
}

//specializing member function for int and int
template<>
void NumStr<int, int>::combine() {
	cout << "Combined two int: " << str + num << endl;
}

//specializing class for two string
template<>
class NumStr<string, string> {
	string data1;
	string data2;

public:
	static int count;

	NumStr(string data1, string data2) {
		this->data1 = data1;
		this->data2 = data2;
		count++;
	}

	void combine() {
		cout << "Data 1: " << data1 << endl;
		cout << "Data 2: " << data2 << endl;
	}
};

int NumStr<string, string>::count = 0;


#endif