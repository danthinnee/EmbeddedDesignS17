#include <iostream>

using namespace std;

double *v;
int count;
int size;
void Initialize();
void Finalize();

int main()
{
   int option = 0;
   Initialize();
   while(option < 1 || option > 5)
	   {
	   cout << "Main menu: " << endl << endl;
	   cout << "1. Print the array" << endl;
	   cout << "2. Append element at the end" << endl;
	   cout << "3. Remove last element" << endl;
	   cout << "4. Insert one element" << endl;
	   cout << "5. Exit" << endl;
	   cout << "Select an option: ";
	   cin >> option;
	   cout << endl;
	   if(option < 1 || option > 5)
		cout << "ERROR: option is invalid. Please select a valid option from the menu." << endl << endl;
	   }
   switch(option){
      case 1 : 
         cout << "You selected \"Print the array\"" << endl;
         break;
      case 2 :
         cout << "You selected \"Append element at the end\"" << endl;
         break;
      case 3 :
         cout << "You selected \"Remove last element\"" << endl;
         break;
      case 4 :
         cout << "You selected \"Insert one element\"" << endl;
         break;
      case 5 :
         Finalize();
         return 0;
         break;
   }
}

void Initialize()
{
   v = new double[2];
   count = 0;
   size = 2;
}

void Finalize()
{
   delete[] v;
}
