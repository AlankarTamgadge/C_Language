
/*
Problem Statement : Accept number from user and return product of its digits.

Input : 123
Output : 6

*/

#include <stdio.h>				//for i/o functions


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name	:	Product
//	Input			:	Integer
//	Output			:	Integer
//	Description		:	Accept number from user and returns product of its digits.
//	Author			:	Alankar Tamgadge
//	Date			:	19 September 2020
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int Product(int no)
{	
	static int iDigit = 0, iSum = 1;
	if(no<0)
	{
		no = -no; 
	}
	if(no > 0)
	{
		iDigit = no % 10;
		iSum = iSum * iDigit;
		no = no / 10;
		Product(no);
	}
	return iSum;
}

int main()
{
	int iValue = 0, iRet = 0;
	printf("Enter number\n");
	scanf("%d",&iValue);

	iRet = Product(iValue);
	printf("\nProduct of Digits of %d is: %d\n",iValue,iRet);

	return 0;
}

