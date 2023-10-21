#include <iostream>
#include <math.h>
#include <fstream>
#include <string>
using namespace std;
const int MAX_SIZE = 100;

void read_matrix(ifstream& myFile, int size, int matrix[MAX_SIZE][MAX_SIZE]);

void printMatrix(int matrix[MAX_SIZE][MAX_SIZE], int size);

void add(int size, int matrixA[MAX_SIZE][MAX_SIZE], int matrixB[MAX_SIZE][MAX_SIZE], int matrixC[MAX_SIZE][MAX_SIZE]);

void subtract(int size, int matrixA[MAX_SIZE][MAX_SIZE], int matrixB[MAX_SIZE][MAX_SIZE], int matrixC[MAX_SIZE][MAX_SIZE]);

void multiply(int size, int matrixA[MAX_SIZE][MAX_SIZE], int matrixB[MAX_SIZE][MAX_SIZE], int matrixC[MAX_SIZE][MAX_SIZE]);

int main()

{
	ifstream myFile;
	myFile.open("matrix_input.txt");
	string firstline;
	getline(myFile, firstline);
	string first = firstline.substr(0, 1);
	int matrix_size = stoi(first);

	int matrix1[MAX_SIZE][MAX_SIZE];
	int matrix2[MAX_SIZE][MAX_SIZE];
	int matrix3[MAX_SIZE][MAX_SIZE];

	read_matrix(myFile, matrix_size, matrix1);
	read_matrix(myFile, matrix_size, matrix2);

	cout << "Jennifer Aber" << endl;
	cout << "Lab 6:  Matrix Manipulation" << endl;
	cout << endl;

	cout << "Matrix 1:" << endl;
	cout << endl;

	printMatrix(matrix1, matrix_size);
	cout << endl;

	cout << "Matrix 2:" << endl;
	cout << endl;

	printMatrix(matrix2, matrix_size);
	cout << endl;

	cout << "Add:" << endl;
	cout << endl;
	add(matrix_size, matrix1, matrix2, matrix3);
	printMatrix(matrix3, matrix_size);
	cout << endl;

	cout << "Subtract:" << endl;
	cout << endl;
	subtract(matrix_size, matrix1, matrix2, matrix3);
	printMatrix(matrix3, matrix_size);
	cout << endl;

	cout << "Multiply:" << endl;
	cout << endl;
	multiply(matrix_size, matrix1, matrix2, matrix3);
	printMatrix(matrix3, matrix_size);

	myFile.close();
	return 0;
}




void read_matrix(ifstream &myFile, int size, int matrix[MAX_SIZE][MAX_SIZE]) {
	

	int matrix_size = size;


	for (int i = 0; i < matrix_size; i++) {
		for (int j = 0; j < matrix_size; j++)
		{
			myFile >> matrix[i][j];
			
		}
		
	}

}



void printMatrix(int matrix[MAX_SIZE][MAX_SIZE], int size) {

	int mySize = size;

	for (int i = 0; i < mySize; i++) {
		for (int j = 0; j < mySize; j++) {
			std::cout << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

void add(int size,  int matrixA[MAX_SIZE][MAX_SIZE], int matrixB[MAX_SIZE][MAX_SIZE], int matrixC[MAX_SIZE][MAX_SIZE])
{
	int mySize = size;

	for (int i = 0; i < mySize; ++i) {
	
		for (int j = 0; j < mySize; ++j) {
			matrixC[i][j] = matrixA[i][j] + matrixB[i][j];

		}
	}


}

void subtract(int size, int matrixA[MAX_SIZE][MAX_SIZE], int matrixB[MAX_SIZE][MAX_SIZE], int matrixC[MAX_SIZE][MAX_SIZE])
{
	int mySize = size;

	for (int i = 0; i < mySize; ++i) {

		for (int j = 0; j < mySize; ++j) {
			matrixC[i][j] = matrixA[i][j] - matrixB[i][j];

		}
	}


}

void multiply(int size, int matrixA[MAX_SIZE][MAX_SIZE], int matrixB[MAX_SIZE][MAX_SIZE], int matrixC[MAX_SIZE][MAX_SIZE])
{
	int mySize = size;

	for (int i = 0; i < mySize; ++i) {

		for (int j = 0; j < mySize; ++j) {
			matrixC[i][j] = matrixA[i][j] * matrixB[i][j];

		}
	}


}


