#include"Header.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name		:			OddDisplay
//  Input				:			Integer
//  Output				:			Display 
//  Description			:			It is used to show odd numbers up to accepted number.
//  Date				:			5 August 2020
//  Author name			:			Alankar Tamgadge
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void OddDisplay(
					int iNo		//input
			 )
{
    int iCnt = 0;   	

	if (iNo == 0)
	{
		printf("Invalid Input");
	}
	else if (iNo < 0 )
	{
		for(iCnt = -1 ; iCnt > iNo ; iCnt-=2 )	
		{
			printf("%d ",iCnt);   
		}
	}
	for(iCnt =1 ; iCnt <= iNo ; iCnt+=2 )	
	{
		printf("%d ",iCnt);   
	}
}