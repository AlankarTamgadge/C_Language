#include"Header.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name		:			EvenPattern
//  Input				:			Intger
//  Output				:			Display 
//  Description			:			It is used to display pattern of #, number and *.
//  Date				:			8 August 2020
//  Author name			:			Alankar Tamgadge
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void EvenPattern(
								int iNo		//input
						   )
{
    int iCnt = 0;   	

	if (iNo < 0)
	{
		iNo = -iNo;
	}
	else if (iCnt == 0)
	{
		printf("No Pattern To Show.\n");
	}
	for (iCnt = 2; iCnt <= (iNo*2); iCnt+=2)
	{	
		if ((iCnt % 2) == 0)
		{
			printf("%d ",iCnt);
		}
	}
}

