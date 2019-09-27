// ConsoleApplication23.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int x;
	
	cout << "Enter 1,2, or 3: ";
	cin >> x;

	switch (x)
	{
	case 1:
		cout << "You Picked Option One" << endl;
		break;
	  case 2:
		  cout << "You Picked Option Two" << endl;
		  break;
	  case 3:
		  cout << "You Picked Option Three" << endl;
		  break;

	default:

		cout << "You Did Not Choose The Correct Option!" << endl;
		break;
	}




    
}

