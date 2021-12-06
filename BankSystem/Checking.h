#pragma once

#include <iostream>
#include <string>
#include "Account.h"

using namespace std;

class Checking : public Account
{
private:
	float chargePerCheck;
	int numCheck;
	float minBalance;
public:
	//constructors
	Checking();

	//set and get methods
	void setchargePerCheck(float c);
	void setnumCheck(int c);
	void setminBalance(float b);
	float getchargePerCheck();
	int getnumCheck();
	float getminBalance();
	float getBalance();

	//display method
	void displayAccount();
};