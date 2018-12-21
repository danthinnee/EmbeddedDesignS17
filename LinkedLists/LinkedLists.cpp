#include <iostream>
#include <string.h>
using namespace std;

struct TV_Program {
	string programName;
	char weekday;
	int minutes;
	TV_Program *next;
};
int main()
{
	TV_Program *head = NULL;	
	int numShows = 2;
	for(int i=0; i<numShows; i++){
	TV_Program *tmpNode = new TV_Program;

	cout << "TV SHOW NUMBER " << i+1 << endl;
	cout << "Enter the name of the TV Program: " << endl;
	cin >> tmpNode->programName;
	cout << "Enter the day of the week the show is on: " << endl;
	cin >> tmpNode->weekday;
	cout << "Enter the running time in minutes: " << endl;
	cin >> tmpNode->minutes;

        tmpNode->next = head;
        head = tmpNode;

	}
	TV_Program *curr = head;
	while(curr->next != NULL){
	TV_Program *prev = curr;
	curr = curr->next;
	curr->next = prev;
	}
	for(int i=0; i<numShows; i++){
	
	cout << "TV SHOW " << i+1 << " INFORMATION: " << endl;
	cout << "Program Name: " << curr->programName << endl;
	cout << "Day of the Week: " << curr->weekday << endl;
	cout << "Running time: " << curr->minutes << endl << endl;
	curr = curr->next;
	}

}
