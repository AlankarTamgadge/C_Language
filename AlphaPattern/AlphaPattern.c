#include"Header.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name		:			AlphaPattern
//  Input				:			Intger
//  Output				:			Display 
//  Description			:			It is used to display pattern of alphabets.
//  Date				:			8 August 2020
//  Author name			:			Alankar Tamgadge
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void AlphaPattern(
						int iNo		//input
					 )
{
    int iCnt = 0;   	

	if (iNo < 0)
	{
		iNo = -iNo;
	}
	if (iNo <= 26)
	{
	
		for (iCnt = 1; iCnt <= iNo; iCnt++)
		{
			printf("%c ",iCnt+64);
		}
	}
	else
	{	
		printf("Invalid Input.\n");}
}

