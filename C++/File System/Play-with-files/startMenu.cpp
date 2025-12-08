#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<fstream>
#include<vector>

#include "file.h"

using namespace std;

void startMenu() {
	while (true) {
		cout << endl;
		cout << "1. Create a file" << endl;
		cout << "2. Update an existing file" << endl;
		cout << "3. Read a file" << endl;
		cout << "0. Exit" << endl;

		int selectOperation;

		cout << "What do you want to do? [0-3]: ";
		cin >> selectOperation;

		if (cin.fail()) {
			cout << "\n\t!!Invalid Selection." << endl;
			cin.clear();
			cin.ignore(1000, '\n');
			continue;
		}

		switch (selectOperation) {
		case 1: {
			create_file();
			break;
		}
		case 2: {
			update_a_file();
			break;
		}
		case 3: {
			read_a_file();
			break;
		}
		case 0: {
			cout << "\n\t***Good Bye***" << endl;
			exit(0);
		}
		default:
			cout << "\n\t!!Invalid selection. Enter a number between 0 and 3." << endl;
		}
	}
}