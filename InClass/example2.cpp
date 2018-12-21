#include<iostream>

using namespace std;

struct Node {
	int data;
	Node* next;
};
void addNode(Node *head, int value){
	Node *newNode = new Node;
	newNode->data = value;
	newNode->next = head->next;
	head->next = newNode;
}

int main(){
	int x=-6;
	cout << sizeof(int) << endl;
	cout << hex << x << endl;
}
	
