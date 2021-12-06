#include "stdafx.h"
#include "Account.h"


//Default constructor.
Account::Account()
{
	accountNum = 0;
	balance = 0;
}

//User input constructor.
Account::Account(int acctNum, float b)
{
	accountNum = acctNum;
	balance = b;
}

//User input for Account and Customer info.
Account::Account(int acctNum, float b, string custName, string custAddress)
{
	accountNum = acctNum;
	balance = b;
	C.setName(custName);
	C.setAddress(custAddress);
}

//Deposits an amount to an account.
bool Account::deposit(int accountNum, float amount)
{
	return false;
}

//Withdraws an amount from an account.
bool Account::withdraw(int accountNum, float amount)
{
	return false;
}

//Gets the account's number.
int Account::getaccountNum()
{
	return accountNum;
}

//Sets the account's number.
void Account::setaccountNum(int a)
{
	accountNum = a;
}

//Gets the account's balance.
float Account::getbalance()
{
	return balance;
}

//Sets the account's balance.
void Account::setbalance(float b)
{
	balance = b;
}

//Gets the Customer associated to the Account.
Customer Account::getC()
{
	return C;
}

//Sets the Customer associated to the Account.
void Account::setC(string name, string address)
{
	C.setName(name);
	C.setAddress(address);
}

//Displays the Account's output labels.
void Account::displayAccount()
{
	cout << "Accout Num: " << accountNum << endl;
	cout << "Account Balance: " << balance << endl;
	cout << "Customer:" << endl;
	
	
}













