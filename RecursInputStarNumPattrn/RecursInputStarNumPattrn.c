
/*
Problem Statement : Display Pattern using recursion.

Output : 5* 4* 3* 2* 1*	

*/

#include <stdio.h>				//for i/o functions


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name	:	DisplayPattern
//	Input			:	Integer
//	Output			:	Display
//	Description		:	Displays Pattern Using Recursion.
//	Author			:	Alankar Tamgadge
//	Date			:	19 September 2020
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void DisplayPattern(int no)
{	
	if(no > 0)
	{
		printf("%d  *  ",no);
		no--;
		DisplayPattern(no);
	}
}

int main()
{
	int iValue = 0;

	printf("Enter Number\n");
	scanf("%d",&iValue);
	DisplayPattern(iValue);

	return 0;
}

