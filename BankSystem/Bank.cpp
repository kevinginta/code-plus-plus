#include "stdafx.h"
#include "Bank.h"
#include <windows.h>
#include <chrono>
#include <thread>


//Default constructor.
Bank::Bank()
{
	name = "";
	routingNum = 0;
}

//User input constructor.
Bank::Bank(string n, int routingnum)
{
	name = n;
	routingNum = routingnum;
}

//Creates an account with a random number and user inputed customer info and balance.
int Bank::createAccount(string n, string address, float balance)
{
	int accnum;
	this_thread::sleep_for(chrono::milliseconds(100));
	srand(GetTickCount());
	accnum = rand() % 100;
	Account A(accnum, balance, n, address);
	bankAccounts.push_back(A);

	return 1;

}

//Deletes an account based on account number.
bool Bank::deleteAccount(int account)
{
	return false;
}

//Gets the bank name.
string Bank::getname()
{
	return name;
}

//Sets the bank name.
void Bank::setname(string n)
{
	name = n;
}

//Gets the bank's routing number.
int Bank::getroutingnum()
{
	return routingNum;
}

//Sets the bank's routing number.
void Bank::setroutingnum(int num)
{
	routingNum = num;
}

//Displays the Bank, Account, and Customer info.
void Bank::DisplayBank()
{
	cout << "Bank Name: " << name << endl;
	cout << "Routing Number: " << routingNum << endl;
	cout << "Number of accounts: " << bankAccounts.size() << endl;
	cout << endl;

	for (Account A : bankAccounts)
	{
		A.displayAccount();
		Customer C = A.getC();
		C.displayCustomer();
		cout << endl;
	}

}
	
	


