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

	cout << "Memory of string p:" << (int*)s << endl;

	cout << "Memory of string s:" << (int*)p << endl;

	s[0] = 'C';
	for (int i = 0; i < lengthS; i++) {
		cout << s[i];
	}
	cout << endl;

	return 0;
}