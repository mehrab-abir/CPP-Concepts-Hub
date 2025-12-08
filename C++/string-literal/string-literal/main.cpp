#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<cstring>

using namespace std;

int main() {

	const char* p = "Maple leaf changes colors";
	char s[50];

	strcpy(s, p);

	int lengthS = strlen(s);

	for (int i = 0; i < lengthS; i++) {
		cout << s[i];
	}
	cout << endl;
	cout << endl;

	cout << "Memory of string p:" << (int*)p << endl;

	cout << "Memory of string s:" << (int*)s << endl;

	s[0] = 'C';
	for (int i = 0; i < lengthS; i++) {
		cout << s[i];
	}
	cout << endl;

	cout << "********************************\n\n";
	
	const char* str1 = "Hello";
	const char str2[] = "Hello";

	cout << "str1: " << str1 << endl;
	cout << "str2: " << str2 << endl;

	cout << endl;

	cout << "Test 1: " << (str1 == "Hello" ? "Same" : "Different") << endl; //same
	cout << "Test 2: " << (str2 == "Hello" ? "Same" : "Different") << endl; //different

	return 0;
}