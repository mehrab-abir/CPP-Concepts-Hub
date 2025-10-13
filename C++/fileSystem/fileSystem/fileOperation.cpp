#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<fstream>
#include<string>

#include "fileOperation.h"

using namespace std;

void write() {
	string str = "Some random text... \nLorem ipsum dolor set amet consectwetur";

	//write to a file "random.txt"
	ofstream writeFile("random.txt");

	if (writeFile.is_open()) {
		writeFile << "Hello world!" << endl;
		writeFile << "File created. This is line 2." << endl;
		writeFile << "This is line 3." << endl;
		writeFile << str << endl;

		writeFile.close();
		cout << "File written successfully" << endl;
	}
	else {
		cout << "	!!Unable to open file for writting" << endl;
	}


	//again write 
	string review;

	cout << "Write a review [Press enter only when you are done]: ";
	getline(cin, review);

	ofstream userReview("myReview.txt");

	if (userReview.is_open()) {
		userReview << review << endl;
		userReview.close();

		cout << "\nThank you. Your review has been saved in a file. You can view it later." << endl;
	}
	else {
		cout << "Unable to process your review." << endl;
	}
}


//Function for reading any file
void read_a_file(string fileName) {
	ifstream openFile(fileName);
	string line;

	if (openFile.is_open()) {
		while (getline(openFile, line)) {
			cout << line << endl;
		}
		openFile.close();
	}
	else {
		cout << "	!!Unable to open the requested file." << endl;
	}
}

void read() {
	ifstream readFile("movieList.txt");
	string line;

	if (readFile.is_open()) {
		while (getline(readFile, line)) {
			cout << line << endl;
		}
		readFile.close();
	}
	else {
		cout << "Unable to open file for reading" << endl;
	}
	cout << endl;

	//cout << "\n\nExit\n";


	int selectFile;

	while (true) {
		cout << endl;
		cout << "1. Movie List" << endl;
		cout << "2. Random text" << endl;
		cout << "3. My Review" << endl;
		cout << "0. Exit" << endl;

		cout << "Select a file to open: ";
		cin >> selectFile;

		if (cin.fail()) {
			cout << "Invalid selection\n";
			cin.clear();
			cin.ignore(100, '\n');
			continue;
		}

		switch (selectFile) {
		case 1: {
			cout << endl;
			read_a_file("movieList.txt");
			break;
		}	
		case 2: {
			cout << endl;
			read_a_file("random.txt");
			break;
		}
		case 3: {
			cout << endl;
			read_a_file("myReview.txt");
			break;
		}
		case 0: {
			cout << "...Exiting\n.\n.\n.\nBye." << endl;
			return;
		}
		default:
			cout << "Invalid Selection." << endl;
			break;
		}
	}
}



//Append movies in a movie list
void append() {

	//counting movies/line to add serial number --reading the lines and counting
	ifstream movieList("movieList.txt");
	string movie;

	int count = 0;

	if (movieList.is_open()) {
		while (getline(movieList, movie)) {
			count++;
		}
	}
	cout << endl;

	count++; //updating the latest serial number for the next movie name
	//incrementing 1 to the last serial number, if it was 5, it will be 6 for the next movie


	//now, adding new movies to the list
	ofstream updateFile("movieList.txt", ios::app); //ios::app is to append new content to the existing one
	string input;

	int serialNumber;

	serialNumber = count; //the latest value of count _ after incrementing

	if (updateFile.is_open()) {
		cout << "Enter new movies {Format -> name (year)}: [Type 'exit' to stop] " << endl;
		while (true) {
			getline(cin, input);
			if (input == "exit" || input == "Exit" || input == "EXIT") {
				break;
			}
			updateFile  << serialNumber << ". " << input<< endl;
			serialNumber++;
		}
		updateFile.close();
		cout << "\nMovie list updated." << endl;
	}
	else {
		cout << "\n		!!Unable to update movie list" << endl;
	}
	

	//reading the updated list
	string choice;
	cout << "Want to see the updated list? [Y(es)/N(o)]: ";
	getline(cin, choice);

	if (choice == "Yes" || choice == "yes" || choice == "Y" || choice == "y" || choice == "YES") {
		cout << endl;

		read_a_file("movieList.txt"); //see read_a_file() function above

		//Or

		/*ifstream readList("movieList.txt");
		string line;

		if (readList.is_open()) {
			while (getline(readList, line)) {
				cout << line << endl;
			}
			readList.close();
		}
		else {
			cout << "  !!Unable to read list" << endl;
		}*/
	}
	else {
		cout << "\nGood Bye" << endl;
	}

}


//write and read at once
void read_write() {
	fstream file("example.txt", ios::in | ios::out | ios::app); //to read, write and append (ios::app)

	string newData;

	cout << "Enter new data: ";
	getline(cin, newData);

	if (file.is_open()) {
		file << newData << endl; //writing newData to the file 'example.txt'

		file.seekg(0); //moving the cursor to position 0, begining point, to read from start

		string line;
		while (getline(file, line)) {
			cout << line << endl;
		}

		file.close();
	}
	else {
		cout << "Error opening file" << endl;
	}

}
