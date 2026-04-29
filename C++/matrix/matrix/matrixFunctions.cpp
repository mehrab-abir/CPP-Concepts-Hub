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

void matrixMultiplication() {
	int nRows, nCols;

	cout << "Number of rows: ";
	cin >> nRows;
	cout << "Number of columns: ";
	cin >> nCols;

	vector<vector<int>>matA(nRows, vector<int>(nCols));
	vector<vector<int>>matB(nRows, vector<int>(nCols));
	vector<vector<int>>matA_x_matB(nRows, vector<int>(nCols));

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

	cout << "Matrix A : \n";
	for (int row = 0; row < nRows; row++) {
		for (int col = 0; col < nCols; col++) {
			cout << matA[row][col] << "  ";
		}
		cout << "\n";
	}

	cout << "\n";

	cout << "Matrix B : \n";
	for (int row = 0; row < nRows; row++) {
		for (int col = 0; col < nCols; col++) {
			cout << matB[row][col] << "  ";
		}
		cout << "\n";
	}

	//multiplication
	for (int row = 0; row < nRows; row++) {
		for (int i = 0; i < nCols; i++) {
			int sum = 0;
			for (int col = 0; col < nCols; col++) {
				sum = sum + matA[row][col] * matB[col][i];
			}
			matA_x_matB[row][i] = sum;
		}
	}

	cout << "\nMatrix A * Matrix B:\n";
	for (int row = 0; row < nRows; row++) {
		for (int col = 0; col < nCols; col++) {
			cout << "\t" << matA_x_matB[row][col] << "  ";
		}
		cout << "\n";
	}

	cout << "\n";
}

/*
1st it.---> 
row = 0, i = 0, col = 0,1,2
matA[0][0] x matB[0][0]
matA[0][1] x matB[1][0]
matA[0][2] x matB[2][0]
=sum

row = 0, i = 1, col = 0,1,2
matA[0][0] x matB[0][1]
matA[0][1] x matB[1][1]
matA[0][2] x matB[2][1]
=sum

row = 0, i = 2, col = 0,1,2
matA[0][0] x matB[0][2]
matA[0][1] x matB[1][2]
matA[0][2] x matB[2][2]
=sum

2nd it.--->
row = 1, i = 0, col = 0,1,2
matA[1][0] x matB[0][0]
matA[1][1] x matB[1][0]
matA[1][2] x matB[2][0]
=sum

row = 1, i = 1, col = 0,1,2
matA[1][0] x matB[0][1]
matA[1][1] x matB[1][1]
matA[1][2] x matB[2][1]
=sum

row = 1, i = 2, col = 0,1,2
matA[1][0] x matB[0][2]
matA[1][1] x matB[1][2]
matA[1][2] x matB[2][2]
=sum

3rd it.--->
row = 2, i = 0, col = 0,1,2
matA[2][0] x matB[0][0]
matA[2][1] x matB[1][0]
matA[2][2] x matB[2][0]
=sum

row = 2, i = 1, col = 0,1,2
matA[2][0] x matB[0][1]
matA[2][1] x matB[1][1]
matA[2][2] x matB[2][1]
=sum

row = 2, i = 2, col = 0,1,2
matA[2][0] x matB[0][2]
matA[2][1] x matB[1][2]
matA[2][2] x matB[2][2]
=sum
*/