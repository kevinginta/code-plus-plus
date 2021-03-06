/**
	RecursiveSummation.cpp
	Purpose: Given an array of integers, output its sum triangle such that the first levelhas the original array, 
	then each level up has one less element and is the sum of consecutive integers 
	within the array before it (at lower level). 
	Where sum of an array is the sum of each consecutive element in an array.

	Text part of the assignment at the bottom of the program.

	@author Kevin Ginta
	@version 2/21/2018
*/

#include "stdafx.h"
#include <iostream>
using namespace std;

/**
	Returns the sum triangle in the correct output format.

	@param The array and the size of the array.
	@return Nothing except the cout outputs (void function)
*/
void RecursiveSum(int arr[], int n);

//Driver function
int main()
{
	int A[] = { 1,2,3,4,5 }; 
	int n = sizeof(A) / sizeof(A[0]);
	RecursiveSum(A, n);
    return 0;
}

void RecursiveSum(int arr[], int n)
{
	if (n < 1) // base case
		return;

	//Temporary array to hold the sum of each array that is passed. 
	//Works as long as the original array size no more than 100.
	int tempArr[100]; 
	for (int i = 0; i < n - 1; ++i)
	{
			int A = arr[i] + arr[i + 1];
			tempArr[i] = A;
	}

	//Recursively calls the same method with the temp Array.
	RecursiveSum(tempArr, n - 1);

	//Prints the smaller array first when compared to the current Array.
	cout << "[";
	for (int i = 0; i < n; ++i)
	{
		if (i == n - 1)
			cout << arr[i] << "]";
		else
			cout << arr[i] << ", ";
	}

	cout << endl << endl;

}

/**
	Four qualifications/requirements for recursion specific to RecursiveSum()
	1. The method calls itself: RecursiveSum(tempArr, n - 1)
	2. The variable I need to take into consideration is getting smaller by 1: (n - 1)
	3. The function has a base case: if(n < 1)
	4. The base case will always be reached since n always decreases.

	*/
