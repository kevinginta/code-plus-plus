#include "stdafx.h"
#include "Customer.h"

//Default constructor.
Customer::Customer()
{
	name = "test1";
	address = "test2";
}

//User input constructor.
Customer::Customer(string n, string a)
{
	name = n;
	address = a;
}

//Gets the customer's name.
string Customer::getName()
{
	return name;
}

//Sets the customer's name
void Customer::setName(string newName)
{
	name = newName;
}

//Gets the customer's address.
string Customer::getAddress()
{
	return address;
}

//Sets the customer's address.
void Customer::setAddress(string newAddress)
{
	address = newAddress;
}

//Displays the Customer's output label.
void Customer::displayCustomer()
{
	cout << "Name: " << name << " address: " << address << endl;
	
}