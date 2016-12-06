// ListsHW5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <algorithm>

int main()
{
	using namespace std;
	string input;
	string inputTest;
	
	while (inputTest != "END")
	{
		cout << "Please enter some input: ";
		getline(cin, input);
		inputTest = input;
		transform(inputTest.begin(), inputTest.end(), inputTest.begin(), ::toupper);
		cout << "test";
	}

    return 0;
}

