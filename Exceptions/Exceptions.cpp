// Exceptions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
void main()
{

	try
	{
		int a = "gfds";

	}
	catch (const exception& e)
	{
		cout << e.what();
	}

}

