#include"decimaltoBOH.h"
#include"BOHtoDecimal.h"
#include"ooperations.h"
#include<iostream>


using namespace std;
int main() {
	
	cout << "Choose Your Mood . " << endl
		<< " 1 : For Operations In Integer Values ." << endl
		<< " 2 : For Conversion From Positive Integer Number To Any System ." << endl
		<< " 3 : For Conversion From Any System To Decimal . " << endl;
		
		
	int chooseMood; cin >> chooseMood; 
	switch (chooseMood)
	{
	case 1:
	{
		ooperations xx;
		xx.setData();
		cout << "\nPleae Choose : \n"
			<< " 1 : for adding numbers \n"
			<< " 2 : for the product \n"
			<< " 3 : for subtract the smallest number from the biggest \n ";

		
		int cohiceOperations; cin >> cohiceOperations;
		switch (cohiceOperations)
		{
		case 1:
			xx.add();
			break;
		case 2:
			xx.product();
			break;
		case 3:
			xx.substract();
			break;
		}
	}
	break;
	case 2:
	{
		decimaltoBOH decimalNumber;
		int n;  cout << "Please Eneter The Integer Decimal Number : "; cin >> n;
		cout << "Please choose "<<endl
			<< " 1 : To Convert To Binary ." << endl
			<< " 2 : To Convert To Octal ." << endl
			<< " 3 : To Convert To Hexa ." << endl
			<< endl;

		int conversionFromDecimal; cin >> conversionFromDecimal;
		switch (conversionFromDecimal)
		{
		case 1:
			decimalNumber.ConvertToBinary(n);
			break;
		case 2:
			decimalNumber.ConvertToOctal(n);
			break;
		case 3:
			decimalNumber.ConvertToHexa(n);
			break;
		}

	}
	break;

	case 3 :
	{
		BOHtoDecimal SD; 
		cout << "Please choose Your Number System . " << endl
			<< " 1 : For Binary System ." << endl
			<< " 2 : For Octal System ." << endl
			<< " 3 : For HexDecimal ." << endl; 

		int choosesystem; cin >> choosesystem; 

		switch (choosesystem)
		{
		case 1:
		{
			cout << "PLease Enter Your Binary Number : "; 
			int n; cin >> n; 
			cout << SD.BtoDecimal(n); 
		}
		break; 
		case 2 :
		{
			cout << "PLease Enter Your Octal Number : ";
			int n; cin >> n;
			cout << SD.OtoDecimal(n);
		}
		break; 
		case 3 :
		{
			BOHtoDecimal numhexa;
			char x[] = "FFFFFFFFFFFFFFFFFFFF";
			cout << "please enter a Hexadecimal number ";
			cin >> x;
			cout << "The Decimal Number Is : " << numhexa.HexatoDecimal(x);
		}
		break; 
		}

		

	}
	}

	

	
	return 0; 
}
	