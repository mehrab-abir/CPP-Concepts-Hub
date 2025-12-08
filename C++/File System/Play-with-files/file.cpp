#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<fstream>
#include<filesystem>
namespace fs = std::filesystem;

#include "file.h"

using namespace std;

void create_file() {
	cout << endl;

	string fileName;

	while (true) {

		cout << "Enter a name for the file (only text file): ";
		cin >> fileName;

		if (ifstream(fileName)) {
			cout << fileName << " already exists. Enter a new file name." << endl << endl;
			cin.clear();
			cin.ignore(1000, '\n');
			continue;
		}

		reverse(fileName.begin(), fileName.end());

		if (fileName.substr(0, 4) == "txt.") {
			break;
		}
		else {
			cout << "Text file must have .txt extension" << endl;
			cin.clear();
			cin.ignore(1000, '\n');
			continue;
		}
	}

	reverse(fileName.begin(), fileName.end());

	ofstream writeFile(fileName);
	string content;

	cin.ignore();

	if (writeFile.is_open()) {
		cout << "Add your content [Type 'Exit' to stop]: ";
		while (true) {
			getline(cin, content);
			if (content == "Exit" || content == "EXIT" || content == "exit") {
				break;
			}
			writeFile << content << endl;
		}
		writeFile.close();
		cout << "\nFile written successfully" << endl;
	}
	else {
		cout << "Unable to write file." << endl;
		exit(1);
	}
}


void update_a_file() {
	cout << "\n";

	cout << "All files in current directory:\n";
	for (const auto& entry : fs::directory_iterator(".")) {
		if (fs::is_regular_file(entry.status()) && entry.path().extension() == ".txt") {
			std::cout << entry.path().filename().string() << '\n';
		}
	}

	string fileName;
	cout << "Enter the file name you want to update: ";
	cin >> fileName;

	if (ifstream(fileName)) {

		while (true) {
			cout << endl;
			cout << "\ta. Keep old content" << endl;
			cout << "\tb. Erase old content" << endl;
			cout << "\tx. Go back to Main menu" << endl;

			char choose;
			cout << "Choose an option: ";
			cin >> choose;

			if (cin.fail()) {
				cout << "\n\t!!Invalid selection." << endl;
				cin.clear();
				cin.ignore(1000, '\n');
				continue;
			}

			cin.ignore(); //to remove the leftover newline '\n' after cin>>choose;

			switch (choose) {
			case 'a': {
				ofstream updateFile(fileName, ios::app);

				string line;

				if (updateFile.is_open()) {
					cout << "Enter your content [Type 'Exit' to stop]: ";
					while (true) {
						getline(cin, line);
						if (line == "Exit" || line == "exit" || line == "EXIT") {
							break;
						}
						updateFile << line << endl;
					}
					updateFile.close();
					cout << endl << fileName << " updated successfully" << endl;
				}
				else {
					cout << "\n\tUnable to update file" << endl;
					exit(1);
				}
				break;
			}
			case 'b': {
				//erase all old content and rewrite the file
				ofstream writeFile(fileName);
				string newContent;

				if (writeFile.is_open()) {
					cout << "Write new content [Type 'Exit' to stop]: ";
					while (true) {
						getline(cin, newContent);
						if (newContent == "exit" || newContent == "Exit" || newContent == "EXIT") {
							break;
						}
						writeFile << newContent;
					}
					writeFile.close();
					cout << "\nOld content removed and new content added successfully" << endl;
				}
				else {
					cout << "\n\tUnable to write file." << endl;
					exit(1);
				}
				break;
			}
			case 'x': {
				startMenu();
				break;
			}
			default:
				cout << "\t\n!!Invalid selection. Choose one from the options above." << endl;
			}
		}
		
	}
	else{
		cout << "File does not exist" << endl;
		startMenu();
	}
	
}


//read a file
void read_a_file() {
	cout << "\n";
	cout << "All files in the directory:\n";

	for (const auto& entry : fs::directory_iterator(".")) {
		if (fs::is_regular_file(entry.status()) && entry.path().extension() == ".txt") {
			std::cout << entry.path().filename().string() << '\n';
		}
	}
	
	cout << endl;
	string fileName;
	cout << "Enter the file name to read: ";
	cin >> fileName;

	if (ifstream(fileName)) {
		ifstream readFile(fileName);
		string line;

		cout << endl << fileName << " content :>>\n";
		if (readFile.is_open()) {
			while (getline(readFile, line)) {
				cout << line << endl;
			}
			readFile.close();
		}
		else {
			cout << "\n\tUnable to open file." << endl;
			exit(1);
		}

		cout << endl;
		startMenu();
	}
	else {
		cout << endl<< fileName << " does not exist." << endl;
		startMenu();
	}

}