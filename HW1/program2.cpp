// Elisa Danthinne
// January 31, 2017
// Homework 1, Problem 2
#include <iostream>

using namespace std;

// declare functions
void printMatrix(int*);
void indexTranspose(int[3][3], int*);
void pointerTranspose(int*);

int main(){	
	// prompt user to fill matrix
	int arr[3][3];
	cout << "Please enter 9 values to fill a 3x3 matrix, pressing enter after each value." << endl;
	cin >> arr[0][0] >> arr[0][1] >> arr[0][2] >> arr[1][0] >> arr[1][1] >> arr[1][2] >> arr[2][0] >> arr[2][1] >> arr[2][2];
	// print initial matrix
	cout << endl << "Initial Matrix: " << endl;
	printMatrix(*arr);
	// transpose the matrix using indices, print
	indexTranspose(arr, *arr);
	cout << endl << "Matrix after indexTranspose(): " << endl;
	printMatrix(*arr);
	// transpose the matrix using pointers, print
	pointerTranspose(*arr);
	cout << endl << "Matrix after pointerTranspose(): " << endl;
	printMatrix(*arr);
}

// each row and col value in the matrix appropriately
void printMatrix(int *arr){
	int j=0;
	for(int i=0; i<9; i++){
		cout << *(arr+i) << '\t';
		j++;
		if(j==3) {
			cout << endl; 
			j=0;
		}
	}
}

// finds transpose of a 3x3 matrix of integers using: 
// a function that uses array indices
void indexTranspose(int original[3][3], int *arr, int row, int col){
	// initialize temporary pointer
	int transposed[row][col];
	// transposes matrix by creating new matrix with swapped values
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			transposed[i][j] = original[j][i];
		}
	}
	// puts values back into array
	int k=0;
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			*(arr + k) = transposed[i][j];
			k++;
		}
	}	
}

// a second function using only pointers
void pointerTranspose(int *arr, int row, int col){
	// initialize temporary pointer
	int *tmp = new int[9];
	// transposes matrix by creating new pointer with swapped values
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			*(tmp + row*i + j) = *(arr + i + row*j);
		}
	}
	// puts values back into array
	// attempted setting arr = tmp, but not effective
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			*(arr + row*i + j) = *(tmp + row*i + j);
		}
	}
}
