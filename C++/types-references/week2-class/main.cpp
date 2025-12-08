#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

//types:
/*
- fundamental types
	- integers, char, short int, int, long, long long, bool
	- floating point numbers: float, double, long double

- built-in types
	- pointer, reference, array

- custom types:
	- structure, class
*/

void display(double* arr, int cnt) {
	cout << endl << "Display with pointers: ";
	for (auto i = 0; i < cnt; i++) {
		cout << arr[i] << " ";
		//cout << *(arr+i) << " "; //same as the previous line,,compiler does it behind the scene
	}
	cout << endl;
}


void print(double&) {
	cout << "L value reference\n";
}
void print(double&&) {
	cout << "R value reference\n";
}



int main(int, char**) {

	auto a = 10; //int
	auto b = 10L; //long int
	auto c = 10LL; //long long 

	auto d = 'a'; //char

	auto e = 12.3; //double
	auto f = 12.3f; //float
	auto g = 12.3L; //long double

	//------------------------------------

	wchar_t str[]{ L"Hello" };

	//cout << str << endl; //address

	wcout << str << endl; //Hello...for wchar_t, wcout has to be used, not cout


	//char16_t str1[] { u"Hello16" };  //UTF-8
	//char32_t str2[] { U"Hello 32 হাতি" };  //UTF-32..all languages


	//--------------------------------------------------

	double arr[] = { 1.2, 65.2, 88.22, 0.11, 65.1,25.123 };
	double* p = nullptr;

	p = arr; //p stores address of the first index of the array...&arr[0]

	cout<< "Number of bites in 'arr': " << sizeof(arr)<<endl; 
	//48, 8 bytes for 1 item, (double), arr has 6 items, so 6*8 = 48

	/*
	to get how many items there are in the array, divide 48 by 8, which means, divide the total
	number of bytes by the number bytes of 1 item, which is 8 for an array of type double
	*/

	cout << "Array size: " << sizeof(arr) / sizeof(arr[0]) << endl; //6

	for (auto i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		cout << arr[i] << " ";
	}

	//double* ptr = nullptr;
	//ptr = arr + 3; //address of 3rd index

	//cout << ptr[0] << endl; //*(ptr+0)
	//cout << ptr[1] << endl; //*(ptr+1)

	//cout << 1[ptr] << endl; // *(1+ptr) == *(ptr+1) //same as the previous one ..>>> ptr[1]

	//cout << ptr[-1] << endl; //*(ptr + (-1)) === *(ptr-1)

	//cout << endl << "Size of p: " << sizeof(p) <<" bytes" << endl; //sizeof() >>>>how many bytes

	//cout << "Size of arr: " << sizeof(arr) << endl;
	//cout << "Size of arr: " << sizeof(arr) / sizeof(double) << endl; 
	//cout << "Size of arr: " << sizeof(arr)/sizeof(arr[0]) << endl; //preferred

	//cout << endl;

	/*for (auto i = 0; i< sizeof(arr)/sizeof(arr[0]); i++) {
		cout << arr[i] << " ";
	}*/
	cout << endl;  

	cout << endl;

	//ranges based for loop
	/*cout << "Ranges based for loop: ";
	for (auto item : arr) {
		cout << item << " ";
	}*/
	cout << endl;

	//display(arr, 6);

	cout << endl;

	//-------------------------------------------------

	//reference
	//double data = 123.456;


	//lvalue references to persistent object in memory
	//double& ref_data = data; //lvalue reference
	//double& ref_data = 12; //not allowed

	////rvalue references to values, temporary objects, objects at the end of their life
	//double&& ref_rData = 10.23; //rvalue reference

	//print(2.3); //rvalue reference

	//print(data); //lvalue reference

	//print(data + 1); //rvalue reference
	//print(data+data); //rvalue reference

	//print(data += data); // lvalue reference

	//print(++data); //lvalue reference

	//print(data++); //rvalue reference


	return 0;
}