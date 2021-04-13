#include"Header.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name		:			Pattern
//  Input				:			Integer
//  Output				:			Display 
//  Description			:			It is used to show pattern.
//  Date				:			5 August 2020
//  Author name			:			Alankar Tamgadge
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void Pattern(
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
	
	for(iCnt = iNo ; iCnt >0 ; iCnt-- )	
	{
		printf("$ & *\t");   
	}
}