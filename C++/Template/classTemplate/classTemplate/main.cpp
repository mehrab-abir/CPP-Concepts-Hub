#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>

#include "template.h"

using namespace std;

int main() {
	cout << "string and number: ";
	NumStr<string, int>Ronaldo("CR", 7);

	Ronaldo.combine();

	cout << "number and string: ";
	NumStr<int, string>Neymar(10, "NJR"); //10NJR

	Neymar.combine();

	cout << "number and number: "; //specilized later for two int, so the specialized one executes here
	NumStr<int, int>TwoIntNums(56, 10);

	TwoIntNums.combine();

	cout << endl;
	cout << "Two int again >>>>>>>>>>>>" << endl;
	cout << "number and number: "; //specilized later for two int, so the specialized one executes here
	NumStr<int, int>IntInt(36, 5);

	IntInt.combine(); //41,,for specialization

	cout << "string and string:\n"; //specilized the class later for two strings, so the specialized one executes here
	NumStr<string, string>TwoStr("Hello", "World");

	TwoStr.combine();

	cout << endl;

	//Specialized member function for double and int
	NumStr<double, int>Sum(5.25, 3);
	Sum.combine();

	cout << endl;
	//Specialized member function for int and int
	NumStr<int, int>Nums(5, 1);
	Nums.combine(); 
	/*6 ? or 51 ? >> Answer: 6, because function for 2 int number is specilized, so it gets priority over normal member fucntion that gets two int numbers*/ 

	cout << endl;
	//Specilized class for two string data
	NumStr<string, string>Text("Computer", "Programming");

	Text.combine();

	//Computer Programming ? or Data1: Computer, Data2: Programming ? Answer: The 2nd one as it is specilized, so it gets priority

	cout<<"Number of objects as <string,int>: " << NumStr<string, int>::count << endl;
	cout<<"Number of objects as <int,string>: " << NumStr<int,string>::count << endl;
	cout<<"Number of objects as <int,int>: " << NumStr<int, int>::count << endl;
	cout<<"Number of objects as <string,string>: " << NumStr<string,string>::count << endl;

	return 0;
}
