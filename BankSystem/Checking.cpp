#include "stdafx.h"
#include "Checking.h"


//Default Constructor.
Checking::Checking()
{
	chargePerCheck = 0;
	numCheck = 0;
	minBalance = 0;
}

//Sets the cost per check.
void Checking::setchargePerCheck(float c)
{
	chargePerCheck = c;
}

//Sets the checking number.
void Checking::setnumCheck(int c)
{
	numCheck = c;
}

//Sets the minimum balance.
void Checking::setminBalance(float b)
{
	minBalance = b;
}

//Returns the cost per check.
float Checking::getchargePerCheck()
{
	return chargePerCheck;
}

//Returns the checking number.
int Checking::getnumCheck()
{
	return numCheck;
}

//Returns the minimum balance.
float Checking::getminBalance()
{
	return minBalance;
}

//Returns the checking balance.
float Checking::getBalance()
{
	return balance;
}

//Displays checking info
void Checking::displayAccount()
{
	C.displayCustomer();
	cout << "chargePerCheck is: " << chargePerCheck << endl;
	cout << "Checking number is: " << numCheck << endl;
	cout << "Minimum balance is: " << minBalance << endl;
	cout << "Balance is: " << balance << endl;
	cout << endl;
}
