
/*
Problem Statement : Accept number from user and return largest digit.

Input : 87983
Output : 9

*/

#include <stdio.h>				//for i/o functions


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name	:	LargestDigit
//	Input			:	Integer
//	Output			:	Integer
//	Description		:	Accept number from user and returns largest digit.
//	Author			:	Alankar Tamgadge
//	Date			:	19 September 2020
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int LargestDigit(int no)
{	
	static int iDigit = 0, iMax = 0;
	if (no<0)
	{
		no = -no;
	}
	if(no > 0)
	{
		iDigit = no % 10;
		if(iDigit >= iMax)
		{
			iMax = iDigit;
		}
		no = no / 10;
		LargestDigit(no);
	}
	return iMax;
}

int main()
{
	int iValue = 0, iRet = 0;
	printf("\nEnter number: \n");
	scanf("%d",&iValue);

	iRet = LargestDigit(iValue);
	
	printf("\nLargest Digit: %d\n",iRet);

	return 0;
}

