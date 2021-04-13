#include"Header.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name		:			NumberHashPattern
//  Input				:			Intger
//  Output				:			Display 
//  Description			:			It is used to display pattern of number and #.
//  Date				:			8 August 2020
//  Author name			:			Alankar Tamgadge
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void NumberHashPattern(
						int iNo		//input
					 )
{
    int iCnt = 0;   	

	if (iNo < 0)
	{
		iNo = -iNo;
	}
	if (iCnt == 0)
	{
		printf("No Pattern To Show.\n");
	}
	for (iCnt = iNo; iCnt >= 1; iCnt--)
	{
		printf("%d # ",iCnt);
	}
}

