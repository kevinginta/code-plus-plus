#pragma once

#include <iostream>
#include <string>

using namespace std;

class Customer
{
private:
	string name;
	string address;

public:
	//constructors
	Customer();
	Customer(string n, string a);

	//set and get methods
	string getName();
	void setName(string newName);
	string getAddress();
	void setAddress(string newAddress);

	//display
	void displayCustomer();
};