#include"Header.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name		:			DivBy3And5
//  Input				:			Integer
//  Output				:			Display
//  Description			:			It is used to display the numbers divisible by 3 & 5.
//  Date				:			18 August 2020
//  Author name			:			Alankar Tamgadge
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void DivBy3And5(int iNum, int *arr)
{
	int iCnt = 0;

	if(arr == NULL)
	{
		printf("Unable to allocate memory");
		return;
	}
	if (iNum == 0)
	{
		printf("\nNo Input.\n");
		return;
	}

	for (iCnt = 0; iCnt < iNum; iCnt++)
	{
		if((arr[iCnt])%5== 0 && (arr[iCnt])%3== 0)
		{
			printf("%d\t",arr[iCnt]);
		}
	}     
}