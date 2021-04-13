#include"Header.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name		:			Is3Digit
//  Input				:			Integer
//  Output				:			Display
//  Description			:			It is used to display numbers which contains 3 digits in it.
//  Date				:			20 August 2020
//  Author name			:			Alankar Tamgadge
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void Is3Digit(int iNum, int *arr)
{
    int iCnt =0;
    
	printf("\n");
	for(iCnt =0; iCnt < iNum; iCnt++)		// Loop to travel the array
    {
			if(arr[iCnt] >= 100 && arr[iCnt]  <= 999)
			{
				printf("%d\t",arr[iCnt]);
			}
	}
}