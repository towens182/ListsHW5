// ListsHW5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "List.h"
#include <string>
#include <iostream>
#include <algorithm>
#include <ctype.h>

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
		try {
			for (it = input.begin(); it < input.end(); it++)
			{
				if (!isalpha(*it) && !isdigit(*it))
				{
					throw string("Not a valid input.");
				}
			}
		}
		catch (string message)
		{
			cout << message << "\n";
		}



		cout << "\n";
	}

	//delete intList;
	//delete stringList;

    return 0;
}

