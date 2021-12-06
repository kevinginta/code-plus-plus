#pragma once

#include <iostream>
#include <vector>
#include "Account.h"
#include <string>

using namespace std;

class Bank
{
private:
	string name;
	int routingNum;
	vector<Account> bankAccounts; //vector to hold the Accounts.
public:
	//constructors
	Bank();
	Bank(string n, int routingNum);

	//account actions
	int createAccount(string n, string address, float balance);
	bool deleteAccount(int account); //stubbed method


	//set and get methods
	string getname();
	void setname(string n);
	int getroutingnum();
	void setroutingnum(int num);

	//display
	void DisplayBank();

};