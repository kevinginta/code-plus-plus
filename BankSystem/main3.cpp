/**

Test Driver Program for Account Class Hierarchy

*/
#include "stdafx.h"
#include <iostream>
#include <string>
#include "Bank.h"
#include "Account.h"
#include "Customer.h"
#include "Checking.h"
#include "Savings.h"
#include <vector>
using namespace std;

int main()
{
	//variable declarations

	//hold a collection of accounts
	vector<Account*> AV;

	//customer information
	string name;
	string address;

	//account type to create - checking or savings
	bool checking;
	Checking ck;
	Savings s;

	//opening balance
	float balance;


	//Create 2 Accounts
	for (int i = 0; i < 2; i++)
	{
		cout << "Creating Account: " << i + 1 << endl << endl;
		cout << "Enter Name: ";
		cin >> name;
		cout << "Enter street: ";
		cin >> address;

		//choose which type of account to create
		cout << "Checking (1) or Savings (0) (Enter 1 for Checking/Enter 0 for Savings)" << endl;
		cin >> checking;

		//Create checking account
		if (checking)
		{
			ck.setC(name, address);
			cout << "Enter Opening balance deposit for checking" << endl;
			cin >> balance;
			ck.setbalance(balance);
			ck.setchargePerCheck(.05);
			ck.setminBalance(100);
			ck.setnumCheck(1);
			AV.push_back(&ck);
			cout << endl;
		}
		//Create savings account
		else
		{
			s.setC(name, address);
			s.setaccountNum(1);
			s.setinterestRate(0.10);
			cout << "Enter opening balance deposit for savings" << endl;
			cin >> balance;
			s.setbalance(balance);
			AV.push_back(&s);
			cout << endl;
		}
	}
	//Display all Accounts
	for (int i = 0; i < AV.size(); i++)
	{	
		AV[i]->displayAccount();
		cout << endl;
	}
	return 0;
}