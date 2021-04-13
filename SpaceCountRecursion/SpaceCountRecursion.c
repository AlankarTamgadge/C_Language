
/*
Problem Statement : Accept string from user and count white spaces.

Input : HE llo WOr lD
Output : 3

*/

#include <stdio.h>				//for i/o functions


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name	:	CountWhiteSpace
//	Input			:	Integer
//	Output			:	Integer
//	Description		:	Accepts string from user and counts number of Whitespace.
//	Author			:	Alankar Tamgadge
//	Date			:	19 September 2020
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int CountWhiteSpace(char * str)
{	
	static int iCnt = 0;
	if(*str != '\0')
	{
		if(*str == ' ' )
		{
			iCnt++;
		}
		str++;
		CountWhiteSpace(str);
	}
	return iCnt;
}

int main()
{
	char arr[20] = {'\0'};
	int iRet = 0;
	printf("Enter String\n");
	scanf(" %[^\n]",arr);

	iRet = CountWhiteSpace(arr);
	printf("%d Whitespaces.\n",iRet);

	return 0;
}

