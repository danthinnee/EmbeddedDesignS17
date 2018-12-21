// Elisa Danthinne
// January 31, 2017
// Homework 1, Problem 3

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

struct Car {
	string make;
	string model;
	string year;
	string color;
};
void insert_array(struct Car * cars);
void print_cars_array(struct Car * cars);
void sort_cars_by_year(struct Car * cars, int);
void print_duplicates(struct Car * cars, int);

int main(){
	int array_size = 10;
	struct Car cars[array_size];
	int option =0;
	while(option != 5)
	{
        cout << "------------------------------" << endl;
        cout << "Main menu: " << endl << endl;
        cout << "1. Print the cars array" << endl;
        cout << "2. Insert car records into a sorted array" << endl;
        cout << "3. Sort cars by year" << endl;
        cout << "4. Print duplicates" << endl;
        cout << "5. Exit" << endl;
        cout << "Select an option: ";
        cin >> option;
        cout << endl;
        switch(option){
	        case 1 :
	                print_cars_array(cars);
	                break;
	        case 2 : // insert car records into a sorted array
			insert_array(cars);
	                break;
	        case 3 :
	                sort_cars_by_year(cars, array_size);
	                break;
	        case 4 :
	                print_duplicates(cars, array_size);
	                break;
	        case 5 :
	                return 0;
	                break;
	        default :
	                cout << "ERROR: option is invalid. Please select a valid option from the menu." << endl << endl;
	                break;

        }
    }
}

// reads and stores the 10 records from file into an array of structs.
void insert_array(struct Car * cars){
	ifstream infile;
	string x, user_file = "CarRecords.txt";
	infile.open(user_file.c_str());
	// tests if the file opens correctly
	if(!infile)
	{
		exit(0);
	}
	// input file CarRecords.txt
	// reads the data into a matrix in the main program
	int count = 1, index=0;
	while(infile >> x)
	{
		switch(count) {
			case 1 : 
				(*(cars+index)).make = x;
				count++;
			break;
			case 2 : 
				(*(cars+index)).model = x;
				count++;
			break;
			case 3 : 
				(*(cars+index)).year = x;
				count++;
			break;
			case 4 : 
				(*(cars+index)).color = x;
				index++; // switches to a different row
				count = 1;
			break;
		}
	}
	// closes file once all members are loaded
	infile.close();
}

// prints out the car records in the array list.
void print_cars_array(struct Car * cars){
	int j=0;
	for(int i=0; i<10; i++){
		cout << "Car make: " << (*(cars+i)).make << endl;
		cout << "Car model: " << (cars+i)->model << endl;
		cout << "Car year: " << (cars+i)->year << endl;
		cout << "Car color: " << (cars+i)->color << endl;
		cout << "---" << endl;
	}
}

// sorts the records in ascending order based on the year field.
void sort_cars_by_year(struct Car * cars, int size){
	int ind;
	for(int i=0; i<size; i++){
		// first element to compare
    		string min= (cars+i)->year;
		// search through rest of array with greater index to find smaller value
        	for(int j=i; j<size; j++)
        	{
         		if ((cars+j)->year<min)
            		{
                		min=(cars+j)->year;
          			ind = j;
        		}
        	}
		// swap values in the array
        	string temp= (cars+i)->year;
        	(cars+i)->year = min;
 		(cars+ind)->year=temp;
    	}
}

// identifies any repeated records, and prints them out when found. 
// Repeated records means that all the fields are the same.
void print_duplicates(struct Car * cars, int size) {
	// sorts by year to make next steps more efficient
	sort_cars_by_year(cars, size);
	// cycles through array
	for(int i=0; i<(size-2); i++){
		// first checks if years are equal
		if((cars+i)->year == (cars+i+1)->year){
			// then checks if all other members are equal 
			if((cars+i)->make == (cars+i+1)->make && (cars+i)->model == (cars+i+1)->model && (cars+i)->color == (cars+i+1)->color){
				// if so, prints duplicates
				cout << "DUPLICATES FOUND: " << endl;
				cout << "---" << endl;
				cout << "Car make: " << (*(cars+i)).make << endl;
				cout << "Car model: " << (cars+i)->model << endl;
				cout << "Car year: " << (cars+i)->year << endl;
				cout << "Car color: " << (cars+i)->color << endl;
				cout << "AND" << endl;
				cout << "Car make: " << (*(cars+i+1)).make << endl;
				cout << "Car model: " << (cars+i+1)->model << endl;
				cout << "Car year: " << (cars+i+1)->year << endl;
				cout << "Car color: " << (cars+i+1)->color << endl;
				cout << "---" << endl;
			}
		}
	}
}
