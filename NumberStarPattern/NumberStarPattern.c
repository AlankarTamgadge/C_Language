#include"Header.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name		:			NumberStarPattern
//  Input				:			Intger
//  Output				:			Display 
//  Description			:			It is used to display pattern of number and stars.
//  Date				:			8 August 2020
//  Author name			:			Alankar Tamgadge
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void NumberStarPattern(
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
	for (iCnt = 1; iCnt <= iNo; iCnt++)
	{
		printf("%d * ",iCnt);
	}
}

