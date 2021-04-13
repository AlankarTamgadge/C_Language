/*

Problem Statement : Accept string from user and count of number of small characters.

Input : HElloWOrlD
Output : 5

*/

#include <stdio.h>				//for i/o functions


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name	:	CountSmall
//	Input			:	Character pointer
//	Output			:	Integer
//	Description		:	Accepts string from user and counts number of small characters.
//	Author			:	Alankar Tamgadge
//	Date			:	19 September 2020
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int CountSmall(char * str)
{	
	static int iCnt = 0;
	if(str == NULL)
	{
		return -1;
	}
	if(*str != '\0')
	{
		if(*str >= 'a' && *str <= 'z' )
		{
			iCnt++;
		}
		str++;
		CountSmall(str);
	}
	return iCnt;
}

int main()
{
	char arr[50] = {'\0'};
	int iRet = 0;
	printf("Enter String\n");
	scanf(" %[^\n]",arr);

	iRet = CountSmall(arr);
	if(iRet != -1)
	{
		printf("\nSmall characters: %d.\n",iRet);
	}
	else if(iRet == -1)
	{
		printf("\nError Occured.\n");
	}

	return 0;
}