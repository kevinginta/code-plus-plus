#include "stdafx.h"
#include "Savings.h"

//Applies interest rate to the balance.
void Savings::accrueInterest()
{
	balance = balance + balance * interestRate;
}

//Default constructer for the interest rate
Savings::Savings()
{
	interestRate = 0;
}

//Default user input interest rate
void Savings::setinterestRate(float i)
{
	interestRate = i;
}

//Returns the interest rate
float Savings::getinterestRate()
{
	return interestRate;
}

//Returns the balance
float Savings::getBalance()
{
	return balance;
}

//Displays savings info
void Savings::displayAccount()
{
	C.displayCustomer();
	cout << "Interest rate is: " << interestRate << endl;
	cout << "Balance: " << balance << endl;
	cout << endl;
}


