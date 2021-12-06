#pragma once

#include <iostream>
#include <string>
#include "Customer.h"

using namespace std;


class Account
{
protected:
	int accountNum;
	float balance;
	Customer C;

public:
	//constructors
	Account();
	Account(int acctNum, float b);
	Account(int acctNum, float b, string custName, string custAddress);

	//stubbed methods
	bool deposit(int accountNum, float amount);
	bool withdraw(int accountNum, float amount);

	//set and get methods
	int getaccountNum();
	void setaccountNum(int a);
	float getbalance();
	void setbalance(float b);
	Customer getC();
	void setC(string name, string address);

	//display Account
	virtual void displayAccount();
};