#include "BOHtoDecimal.h"
#include<cmath>
#include<string>
using namespace std; 
BOHtoDecimal::BOHtoDecimal() : counter (0) , sum (0)
{
}

int BOHtoDecimal::BtoDecimal(int num )
{
	while (num != 0)
	{
		reminder = num % 10;
		num = num / 10; 
		sum += reminder * pow(2, counter);
		counter++; 
	}
	return sum; 
}
int BOHtoDecimal::OtoDecimal(int num )
{
	while (num != 0)
	{
		reminder = num % 10;
		num = num / 10;
		sum += reminder * pow(8, counter);
		counter++;
	}
	return sum;
}
int BOHtoDecimal::HexatoDecimal(char num[])
{
		int length = strlen(num) ;
		int  base = 1;
		long long int sum = 0;
		for (int i = length - 1; i >= 0; i--) {
			if (num[i] >= '0' && num[i] <= '9') {
				sum += ((int)num[i] - 48) * pow(16,counter);
			}
			else if (num[i] >= 'A' && num[i] <= 'F') {
				sum += ((int)num[i] - 55) * pow(16,counter);
			}
			counter ++ ;
		}
		return sum;
}

 
