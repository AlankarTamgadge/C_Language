
/*
Problem Statement : Accept number from user and return summation of its digits.

Input : 879
Output : 24

*/

#include <stdio.h>				//for i/o functions


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name	:	DigitSum
//	Input			:	Integer
//	Output			:	Integer
//	Description		:	Accept number from user and returns summation of its digits.
//	Author			:	Alankar Tamgadge
//	Date			:	19 September 2020
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int DigitSum(int no)
{	
	static int iDigit = 0, iSum = 0;
	if(no > 0)
	{
		iDigit = no % 10;
		iSum = iSum + iDigit;
		no = no / 10;
		DigitSum(no);
	}
	return iSum;
}

int main()
{
	int iValue = 0, iRet = 0;
	printf("Enter number: ");
	scanf("%d",&iValue);

	iRet = DigitSum(iValue);
	printf("%d",iRet);

	return 0;
}

