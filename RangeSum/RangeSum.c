#include"Header.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name		:			RangeSum
//  Input				:			Intger,Intger
//  Output				:			Display 
//  Description			:			It is used to display addition of numbers in between the range.
//  Date				:			7 August 2020
//  Author name			:			Alankar Tamgadge
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void RangeSum(
					int iStart,		//input
					int iEnd		//input
	      		 )
{
	int iCnt = 0;
	int iSum = 0;

	if (iStart > iEnd || iStart <0)
	{
		printf("Invalid Range.\n");
	}		

	else if (iStart == 0 && iEnd == 0)
	{
		printf("Invalid Range.\n");
	}
	else
	{
		for (iCnt = iStart; iCnt <= iEnd; iCnt++)
		{
			iSum = iSum + iCnt;
		}
		printf("\nSum is %d \n",iSum);
	}
}	