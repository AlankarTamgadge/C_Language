
/*
Problem Statement : Accept number from user and return smallest digit.

Input : 87983
Output : 3

*/

#include <stdio.h>				//for i/o functions


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name	:	SmallestDigit
//	Input			:	Integer
//	Output			:	Integer
//	Description		:	Accept number from user and returns smallest digit.
//	Author			:	Alankar Tamgadge
//	Date			:	19 September 2020
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int SmallestDigit(int no)
{	
	static int iDigit = 0, iMin = 9;

	if(no== 0)
	{
		return 0;
	}
	
	if (no<0)
	{
		no = -no;
	}

	if(no > 0)
	{
		iDigit = no % 10;
		if(iDigit <= iMin)
		{
			iMin = iDigit;
		}
		no = no / 10;
		SmallestDigit(no);
	}

	return iMin;
}

int main()
{
	int iValue = 0, iRet = 0;
	printf("\nEnter number: \n");
	scanf("%d",&iValue);

	iRet = SmallestDigit(iValue);
	
	printf("\nSmallest Digit: %d\n",iRet);

	return 0;
}

