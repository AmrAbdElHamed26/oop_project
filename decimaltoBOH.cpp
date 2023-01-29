#include "decimaltoBOH.h"
#include<iostream>
using namespace std;
void decimaltoBOH::set_Num(int n)
{
	num = n ;
}

void decimaltoBOH::ConvertToBinary(int n )
{
	 num = n ; 
	while (true)
	{
		sum = num / 2;
		num = (int)sum;
		digit = (sum - num);
		cout << digit * 2;

		if (num < 1)
		{
			break;
		}
	}
}
void decimaltoBOH::ConvertToOctal(int n)
{
	num = n;
	while (true)
	{
		sum = num / 8;
		num = (int)sum;
		digit = (sum - num);
		cout << digit * 8;

		if (num < 1)
		{
			break;
		}
	}
}
void decimaltoBOH::ConvertToHexa(int n )
{
num = n; 
	while (true)
	{
		sum = num / 16;
		num = (int)sum;
		digit = (sum - num);
		alpha = 16 * digit; 
		switch (alpha)
		{
		case 10 :
			cout << "A";
			break;
		case 11 :
			cout << "B";
			break;
		case 12 :
			cout << "C";
			break;
		case 13 :
			cout << "D";
			break;
		case 14 :
			cout << "E";
			break;
		case 15 :
			cout << "F";
			break;
		default :
			cout << digit * 16;
		}
		if (num < 1)
		{
			break;
		}
	}
}
