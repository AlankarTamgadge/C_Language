
/*
Problem Statement : Accept number from user and return its factorial.

Input : 5
Output : 120

*/

#include <stdio.h>				//for i/o functions


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name	:	Fact
//	Input			:	Integer
//	Output			:	Integer
//	Description		:	Accept number from user and returns its factorial.
//	Author			:	Alankar Tamgadge
//	Date			:	19 September 2020
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int Fact(int iNo)
{	
	static int iFact = 1, i = 1;
	if(i <= iNo)
	{
		iFact = iFact * i;
		i++;
		Fact(iNo);
	}
	return iFact;
}

int main()
{
	int iValue = 0, iRet = 0;
	printf("Enter number: ");
	scanf("%d",&iValue);

	iRet = Fact(iValue);
	printf("%d",iRet);

	return 0;
}




/*
if i > iNo/2
{
	if iNo % i == 0
	{
		iFact = iFact * i;
	}
}

*/