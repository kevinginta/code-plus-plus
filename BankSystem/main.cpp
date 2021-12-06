/**
	CSCI 133
	main.cpp
	Purpose: Creates a bank and allows the user to create an Account and a Custoemr associated to that Account.

	@author Kevin Ginta
	@version 1.0 2/14/18
*/

#include "stdafx.h"
#include <iostream>
#include <string>
#include "Bank.h"

//#include "Checking.h"
//#include "Savings.h"

using namespace std;

int main()
{
	//variables and declarations
	Bank b("MyFederalSavings", 123456789);

	//test implementation
	b.createAccount("Me", "12345 My Street", 120.25);
	b.createAccount("You", "6789 Your Street", 500.50);
	b.DisplayBank();
	cout << "done" << endl;

	return 0;
}