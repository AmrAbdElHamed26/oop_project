#pragma once
#include"decimaltoBOH.h"
#include"BOHtoDecimal.h" 
class BOHtoDecimal : public decimaltoBOH 
{
private :
	int num, sum, reminder, counter ;
public :

	int BtoDecimal(int num );
	int OtoDecimal(int num );
	int HexatoDecimal(char num[]);

	BOHtoDecimal();
};

