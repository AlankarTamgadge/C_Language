#include"Header.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name		:			RangeDisplayRev
//  Input				:			Intger,Intger
//  Output				:			Display 
//  Description			:			It is used to display numbers in between the range.
//  Date				:			7 August 2020
//  Author name			:			Alankar Tamgadge
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void RangeDisplayRev(
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
		for (iCnt = iEnd; iCnt >= iStart; iCnt--)
		{
			printf("%d ",iCnt);
		}
	}

}	