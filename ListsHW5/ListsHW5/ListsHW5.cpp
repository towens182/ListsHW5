// ListsHW5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "List.h"
#include <string>
#include <iostream>
#include <algorithm>
#include <ctype.h>
#include <stdlib.h>

void CheckInput(std::string input);

int main()
{
	using namespace std;
	string input;
	string inputTest;
	string::iterator it;
	//List<int> * intList = new List<int>;
	//List<string> * stringList = new List<string>;
	

	while (inputTest != "END")
	{
		cout << "Please enter some input: ";
		getline(cin, input);
		inputTest = input;
		transform(inputTest.begin(), inputTest.end(), inputTest.begin(), ::toupper);
		
		if (inputTest == "END")
		{
			break;
		}
		try
		{
			CheckInput(input);			
		}
		catch (string message)
		{
			system("CLS");
			cout << message;
		}
	}

	//delete intList;
	//delete stringList;

    return 0;
}

void CheckInput(std::string input)
{
	using namespace std;
	
	if (input.empty())
	{
		throw string("No input was entered.\n");
	}

	string::iterator it;
	string::iterator first;

	first = input.begin();
	for (it = input.begin(); it < input.end(); it++)
	{
		//Make sure no special characters were entered
		if (!isalpha(*it) && !isdigit(*it))
		{
			throw string("Invalid input. No special characters or spaces allowed.\n");
		}
		//Make sure all characters are letters
		if (isalpha(*first) && !isalpha(*it))
		{
			throw string("Invalid input. Can't mix letters and digits.\n");
		}
		//Make sure all characters are digits
		if (isdigit(*first) && !isdigit(*it))
		{
			throw string("Invalid input. Can't mix letters and digits.\n");
		}
	}
	system("CLS");
	if (isalpha(*first))
	{
		//add to letter list
		cout << input << " Added to letter list\n";
	}
	else
	{
		//add to digit list
		cout << input << " Added to number list\n";
	}
}
