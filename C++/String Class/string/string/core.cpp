#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<sstream>

using namespace std;


void capacity() {
	string str = "I can do it all day";

	//assign different value to the same string variable
	//str = "Cap said, I can do it all day";

	//print the string
	cout << str << endl;

	//check size
	cout << "Size: " << str.size() << endl;

	//clear the string
	//str.clear();

	//check if the string is empty
	if (str.empty()) {
		cout << "Empty" << endl;
	}
	else {
		cout << "Not empty" << endl;
	}

}




void element_access() {
	string str = "Avengers, Assemble";

	cout << str << endl;

	//first character
	cout << "First ch: " << str.front() << endl;
	cout << "Last ch: " << str.back() << endl;

	//ith index
	cout << "3rd index: " << str[3] << endl;
}



void stringModifiers() {
	string str = "Valar Morghulis";

	//append another string
	//str += " Valar Dohaeris";
	str.append(", Valar Dohaeris");

	//cout << str << endl;

	//cout << "\n";

	//assign string
	//str.assign("The north remembers");

	//cout << "After assiging different string: " << str << endl;

	cout << endl;

	//add to last
	//string s = "Jon";
	//s.push_back('s');

	//cout << s << endl;

	//remove ch from the last 
	//s.pop_back();
	//cout << s << endl;

	//erase characters
	//str.erase(9);
	//cout << "After erasing characters from str: " << str << endl;

	//erase a spacefic length
	//str.erase(10, 5);
	//cout << "After erasing 5 characters from middle: " << str << endl;

	//replace a portion
	string text = "Hello Bangladesh";
	//text.replace(6, 10, "World");

	//text.replace(6, 0, "World and ");

	//insert a portion to a specific position
	text.insert(6, "Abir and ");
	
	cout << text << endl;
}





void strIterators() {
	string str = "Top";

	//visite all characters seperately
	for (int i = 0; i < str.size(); i++) {
		cout << str[i] << " ";
	}

	cout << endl;

	//get the 1st ch, it's a pointer, pointing to the 1st char, so dereferance
	cout << *str.begin() << endl;

	//last char
	cout << *(str.end() - 1) << endl;
	//str.end() points to the character after the last character, so we write -1 to access the last char

	//iterators

	//iterate through the string and do anything
	string::iterator it;
	for (it = str.begin(); it < str.end(); it++) {
		if (*it == 'o') {
			*it = 'a';
		}
	}

	cout << str << endl;

	//traverse all characters
	for (it = str.begin(); it < str.end(); it++) {
		cout << *it << " ";
	}

	cout << endl;

	//reverse iterator
	//traverse in reverse
	string::reverse_iterator rev;
	for (rev = str.rbegin(); rev < str.rend(); rev++) {
		cout << *rev << " ";
	}

	cout << endl;
	cout << endl;

	string line = "habijabi";
	
	//use auto keyword
	for (auto ch = line.begin(); ch < line.end(); ch++) {
		if (*ch == 'i') {
			*ch = 'u';
		}
	}

	//traverse
	for (auto ch = line.begin(); ch < line.end(); ch++) {
		cout << *ch;
	}

	cout << endl;
}


//string stream -- must include sstream header file
void stringStream() {
	string str;

	cout << "Enter a string: ";
	getline(cin, str);


	stringstream ss(str);
	string word; //to receive each word from the string

	int countWord = 0;

	while (ss >> word) {
		//do anything
		cout << word << endl;
		countWord++;
	}

	cout << endl;

	cout << "Total word count: " << countWord << endl;;

}