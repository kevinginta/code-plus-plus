// coinToss.cpp : Defines the entry point for the console application.
//Kevin Ginta


#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <string>
using namespace std;

int coinFlip(int a, int b);

int main()
{
	const string heads = "Heads";
	const string tails = "Tails";
	int countHeads = 0;
	int countTotal = 0;

	srand(static_cast<int>(time(0))); //random seed generator based off time.

	while (countHeads < 3)
	{
		int currentFlip = coinFlip(1, 2); //coinFlip() methods gets called here.
		if (currentFlip == 1)
		{
			cout << heads << endl;
			countHeads++;
			countTotal++;
		}
		else
		{
			cout << tails << endl;
			countHeads = 0;
			countTotal++;
		}
	}

	cout << "It took " << countTotal << " flips to get 3 consecutive heads." << endl;

	return 0;
}
//Method to get the numbers 1 (which stands for heads) and 2 (which stands for tails) in a random fashion.
int coinFlip(int a, int b)
{
	int flip;
	flip = rand() % 2;
	if (flip == 0)
		return a;
	else
		return b;
}