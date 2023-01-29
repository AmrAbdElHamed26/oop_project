#include "ooperations.h"
#include <iostream> 
using namespace std; 

void ooperations::setData()
{
	cout << endl;
	cout << "Please Enter The First Number : ";
	cin >> num1;
	cout << "Please Enter The Second Number : ";
	cin >> num2;
	
}

void ooperations::add()
{
	sum = num1 + num2;
	cout << "\nyour choice for conversion is : ";
	cin >> choice;
	
	switch (choice)
	{
	case 1 :
		cout << "The Summation For Two Numbers In A Binary System Is : " << endl; 
		decimaltoBOH::ConvertToBinary(sum);
		break;
	case 2 :
		cout << "The Summation For Two Numbers In An Octal System Is : " << endl;
		decimaltoBOH::ConvertToOctal(sum);
		break; 
	case 3 :
		cout << "The Summation For Two Numbers In A HexaDecimal System Is : " << endl;
		decimaltoBOH::ConvertToHexa(sum);
		break; 
	default :
		cout << "Your Choice Is Wrong " << endl; 
	}
}
void ooperations::product()
{
	
	Product = num1 * num2;
	cout << "\nyour choice for conversion is : ";
	cin >> choice;
	
	switch (choice)
	{
	case 1 :
		decimaltoBOH::ConvertToBinary(Product);
		break; 
	case 2 :
		decimaltoBOH::ConvertToOctal(Product);
		break; 
	case 3 :
		decimaltoBOH::ConvertToHexa(Product);
		break; 
	default :
		decimaltoBOH::ConvertToBinary(Product);
		cout << "\n";
		decimaltoBOH::ConvertToOctal(Product);
		cout << "\n";
		decimaltoBOH::ConvertToHexa(Product);
	}
}
void ooperations::substract()
{
	sub = num1 - num2;
	if (sub < 0)
		sub *= -1; 
	cout << "\nyour choice for conversion is : ";
	cin >> choice;
	 
	switch (choice)
	{
	case 1:
		decimaltoBOH::ConvertToBinary(sub);
		break;
	case 2:
		decimaltoBOH::ConvertToOctal(sub);
		break;
	case 3:
		decimaltoBOH::ConvertToHexa(sub);
		break;
	default:
		decimaltoBOH::ConvertToBinary(sub);
		cout << "\n";
		decimaltoBOH::ConvertToOctal(sub);
		cout << "\n";
		decimaltoBOH::ConvertToHexa(sub);
	}
}

ooperations::ooperations():num1(0) , num2(0) , sum(0) , Product(0) , choice(0) ,sub(0)
{
	cout << "After Set numbers , please choose :\n"
		<< "1 : For Binary Conversion \n"
		<< "2 : For Octal Conversion \n"
		<< "3 : For Hexa Conversion \n"; 
		
}
ooperations::ooperations(int x, int y) : num1(x), num2(y)
{
	ooperations::ooperations();
}