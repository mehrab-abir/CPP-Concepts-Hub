#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>

using namespace std;

template<typename T>
T add(T a, T b) {
	return a + b;
}


//class template
template<typename T1, typename T2>
class Pair {
	T1 first;
	T2 second;

public:
	Pair(T1 a, T2 b) {
		first = a;
		second = b;
	}

	void show() {
		cout << "First : " << first << ", Second: " << second << endl;
	}
};

template<typename myType>
class Text {
	myType text;
public:
	Text(myType text) {
		this->text = text;
	}

	void showText() {
		cout <<"Text: "<< text << endl;
	}
};

int main() {
	cout << "INT: "<<add(5, 6) << endl;
	cout << "Double: " << add(2.5, 3.1) << endl;

	Pair<int, string>p(5, "Hello");
	p.show();

	cout << endl;
	Pair<string, string>p2("Text 1", "Text 2");
	p2.show();

	cout << "*****************" << endl;

	Text<string>text1("lorem ipsum dolor set amet");
	text1.showText();

	Text<int>text2(535);
	text2.showText();

	return 0;
}