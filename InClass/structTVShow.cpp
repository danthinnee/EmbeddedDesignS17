#include<iostream>
#include<string>
using namespace std;



int main()
{
	cout << "WELCOME TO STRUCTS" << endl;
	struct TV_Program {
		string programName;
		char weekday;
		int minutes;
	};
	
	int length=5;
	struct TV_Program shows[length];

	for(int i=0; i < length; i++)
	{
		cout << "TV SHOW NUMBER " << (i+1) << ":" << endl;
		cout << "Enter the name of the TV Program: "<< endl;
		cin >> shows[i].programName;
                cout << "Enter the day of the week the show is on: " << endl;
                cin >> shows[i].weekday;
                cout << "Enter the running time in minutes: " << endl;
                cin >> shows[i].minutes;
	}
	cout << "---------------------------------"<< endl;
	for(int i=0; i < length; i++)
	{
		cout << "TV SHOW NUMBER " << (i+1) << " INFORMATION:" << endl;
		cout << "Program Name: " << shows[i].programName << endl;
		cout << "Day of the Week: " << shows[i].weekday << endl;
		cout << "Running time:  " << shows[i].minutes << endl << endl;

	}
}
