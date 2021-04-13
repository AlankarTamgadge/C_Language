#include"Header.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name		:			DisplayPattern1
//  Input				:			Intger
//  Output				:			Display 
//  Description			:			It is used to display numbers in between the range.
//  Date				:			8 August 2020
//  Author name			:			Alankar Tamgadge
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void DisplayPattern1(
						int iNo		//input
					 )
{
    int iCnt = 0;   	

	if (iNo < 0)
	{
		iNo = -iNo;
	}
	
	for(iCnt = iNo ; iCnt >0 ; iCnt-- )	
	{
		printf("# ");   
	}	
	for(iCnt = iNo ; iCnt >0 ; iCnt-- )	
	{
		printf("* ");   
	}
	printf("\n");   
}

