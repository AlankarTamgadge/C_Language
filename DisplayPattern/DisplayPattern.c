#include"Header.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name		:			Display
//  Input				:			Integer
//  Output				:			Display 
//  Description			:			It is used to show pattern.
//  Date				:			5 August 2020
//  Author name			:			Alankar Tamgadge
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void Display(
					int iNo		//input
			 )
{
    int iCnt = 0;   	

	if (iNo == 0)
	{
		printf("Invalid Input");
	}
	if (iNo < 0)
	{
		iNo = -iNo;
	}
	
	for(iCnt = 1 ; iCnt <= iNo ; iCnt++ )	
	{
		printf("%d ",iCnt);   
	}
}