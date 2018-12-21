// Elisa Danthinne
// January 31, 2017
// Homework 1, Problem 1

#include <iostream>
#include <math.h>
#include <algorithm>
#include <string.h>
#include<bitset>

using namespace std;

// declare funcions
void print_bytes();
double return_power(int, int);
int return_max(int, int);
void print_formats(int, int);

int main(){
	int num1, num2;
	// PROMPT THE USER FOR TWO POSITIVE INTEGERs
	cout << "Please enter two positive integers. " << endl << "First integer: ";
	cin >> num1;
	cout << "Second integer: ";
	cin >> num2;
	// functions declared before the main are called
	print_bytes();
	cout << num1 << " to the power of " << num2 << " is " << return_power(num1, num2) << ". "<< endl;
	cout << "The max of the two integers is " << return_max(num1, num2) << ". "<< endl;
	print_formats(num1, num2);
}

// prints out the  number of bytes used to store the following data types: bool, char, int, float, and double
void print_bytes(){
	cout << "The number of bytes used to store a bool is " << sizeof(bool) << " bytes." << endl;
	cout << "The number of bytes used to store a char is " << sizeof(char) << " bytes." << endl;
	cout << "The number of bytes used to store a int is " << sizeof(int) << " bytes." << endl;
	cout << "The number of bytes used to store a float is " << sizeof(float) << " bytes." << endl;
}

// uses the math library to return the first number raised to the power of the second.
double return_power(int first, int second){
	double x, y;
	x = first; y = second;
	return pow(x, y);
}

// uses the algorithm library to return the maximum of the two numbers
int return_max(int first, int second){
	return max(first, second);
}

// prints out the two numbers in decimal, hexadecimal, octal, and binary formats
void print_formats(int first, int second){
	cout << "The first integer in decimal format is " << dec << first << "." << endl;
	cout << "The first integer in hexadecimal format is " << hex << first << "." << endl;
	cout << "The first integer in octal format is " << oct << first << "." << endl;
	cout << "The first integer in binary format is "<<bitset<32>(first) << endl;

	cout << "The second integer in decimal format is " << dec << second << "." << endl;
	cout << "The second integer in hexadecimal format is " << hex << second << "." << endl;
	cout << "The second integer in octal format is " << oct << second << "." << endl;
	cout << "The first integer in binary format is "<< bitset<32>(second) << endl;
}


