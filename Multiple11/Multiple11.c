#include"Header.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name		:			Multiple11
//  Input				:			Integer
//  Output				:			Display
//  Description			:			It is used to display the numbers Multiple of 11.
//  Date				:			18 August 2020
//  Author name			:			Alankar Tamgadge
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void Multiple11(int iNum, int *arr)
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
		if((arr[iCnt] % 11) == 0 && arr[iCnt] != 0)
		{
			printf("%d\t",arr[iCnt]);
		}
	}     
}