#include"Header.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name		:			RangeDisplayEven
//  Input				:			Intger,Intger
//  Output				:			Display 
//  Description			:			It is used to display even numbers in between the range.
//  Date				:			7 August 2020
//  Author name			:			Alankar Tamgadge
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void RangeDisplayEven(
					int iStart,		//input
					int iEnd		//input
	      		 )
{
	int iCnt = 0;
	
	if (iStart > iEnd)
	{
		printf("Invalid Range.\n");
	}
	else
	{
		for (iCnt = iStart; iCnt <= iEnd; iCnt++)
		{
			if ((iCnt % 2) == 0)
			{
				printf("%d ",iCnt);
			}
		}
	}

}	