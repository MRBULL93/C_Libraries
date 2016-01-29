			// Factorial.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <conio.h>

using namespace std;

long Factorial(int n)
{
	if (n == 0)
		return 1;
	else
	{
		return n*Factorial(n - 1);
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	printf("Factorial : %d " , Factorial(10));
	_getch();
	return 0;
}


