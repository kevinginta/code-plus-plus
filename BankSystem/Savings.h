#pragma once

#include <iostream>
#include <string>
#include "Account.h"

using namespace std;

class Savings : public Account
{
private:
	float interestRate;
	void accrueInterest();
	
public:
	Savings();

	//Set and get methods
	void setinterestRate(float i);
	float getinterestRate();
	float getBalance();

	//display method
	void displayAccount();
};