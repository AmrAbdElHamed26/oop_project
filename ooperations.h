#pragma once
#include"decimaltoBOH.h"
#include"BOHtoDecimal.h"
class ooperations : public decimaltoBOH , public BOHtoDecimal 
{
private :
	int  sum , Product , num1 , num2 , choice  ,sub  ; 
public :
	void setData(); 
	void add();
	void product();
	void substract();
	ooperations();
	ooperations(int x, int y);
};

