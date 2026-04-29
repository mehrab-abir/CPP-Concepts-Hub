#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include "matrixFunctions.h"

using namespace std;

void matrixVisual() {
	int mat[5][5];
	int nRows, nCols;

	cout << "Number of rows (<5): ";
	cin >> nRows;

	if (nRows >= 5) {
		cout << "Number of rows has to be less then 5"<<endl;
		return;
	}

	cout << "Number of columns (<5): ";
	cin >> nCols;

	if (nCols >= 5) {
		cout << "Number of columns has to be less then 5" << endl;
		return;
	}

	cout << "Input:" << endl;
	for (int row = 0; row < nRows; row++) {
		for (int col = 0; col < nCols; col++) {
			cout << "Matrix[" << row+1 << "][" << col+1 << "]: ";
			cin >> mat[row][col];
		}
		cout << endl;
	}


	cout << "\nMatrix:\n";
	for (int row = 0; row < nRows; row++) {
		for (int col = 0; col < nCols; col++) {
			cout << mat[row][col]<<" ";
		}
		cout << endl;
	}
}

void matrixAddition() {
	int nRows, nCols;

	cout << "Number of rows: ";
	cin >> nRows;
	cout << "Number of columns: ";
	cin >> nCols;

	vector<vector<int>>matA(nRows, vector<int>(nCols));
	vector<vector<int>>matB(nRows, vector<int>(nCols));
	vector<vector<int>>matA_plus_matB(nRows, vector<int>(nCols));

	cout << "\nInput for matrix A: " << endl;
	for (int row = 0; row < nRows; row++) {
		for (int col = 0; col < nCols; col++) {
			cout << "Matrix A[" << row + 1 << "][" << col + 1 << "]: ";
			cin >> matA[row][col];
		}
		cout << "\n";
	}

	cout << "\n";
	cout << "Input for matrix B: " << endl;
	for (int row = 0; row < nRows; row++) {
		for (int col = 0; col < nCols; col++) {
			cout << "Matrix B[" << row + 1 << "][" << col + 1 << "]: ";
			cin >> matB[row][col];
		}
		cout << "\n";
	}

	for (int row = 0; row < nRows; row++) {
		for (int col = 0; col < nCols; col++) {
			matA_plus_matB[row][col] = matA[row][col] + matB[row][col];
		}
	}

	cout << "Matrix A + Matrix B:\n";
	for (int row = 0; row < nRows; row++) {
		for (int col = 0; col < nCols; col++) {
			cout <<"\t"<<matA_plus_matB[row][col] << "  ";
		}
		cout << endl;
	}

	cout << endl;

}