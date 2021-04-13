#include"Header.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name		:			Display
//  Input				:			Integer
//  Output				:			Display 
//  Description			:			It is used to show number line.
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
	
	for(iCnt =-iNo ; iCnt <= iNo ; iCnt++ )	
	{
		printf("%d ",iCnt);   
	}
}