#include "gcd.h"
int gcd(int a, int b)
{
	int remain = a % b;
	
	while (remain = a % b)
	{
		a = b;
		b = remain;
		remain = a % b;
	}
	return b;
}





/*
int gcd(int a, int b)
{
	if (b > a)
	{
		int temp = a;
		a = b;
		b = temp;
	}
	
	int result = 1;
	for (int i = 1; i <= b; ++i)
	{
		if (a % i == 0 && b % i == 0)
		{
			result = i;
		}
	}
	return result;
}
*/
