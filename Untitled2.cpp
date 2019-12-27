#include "Die.h"
#include <iostream>
#include <cstdlib>

using namespace std;

int main () 
{
	const int NUM_SIZE = 6;
	char choice;
		
	cout << "Dealer start rolling the dice ";
	//Die dice1;
	//Die dice2;
	
	Die dice1;
	Die dice2;
	
	dice1.roll();
	dice2.roll();
	
	cout << "Here is the result of the roll " << endl;
	cout << dice1.getValue() << " ";
	cout << dice2.getValue() << " ";
	cout << endl;
	
	cout << "Enter c to continue to roll, enter x to exit ";
	cin >> choice;
	
	if (choice = 'c')
	{
		do 
		{
			dice1.roll ();
			dice2.roll ();
		
			cout << "Here is the result of the roll " << endl;
			cout << dice1.getValue() << " ";
			cout << dice2.getValue() << " ";
			cout << endl;
			cout << "Roll again ?";
			cin >> choice;
		}
		while 
		(choice != 'x');
	}
	else 
	{
		exit (0);
	}
}
