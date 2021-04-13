#include"Header.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name		:			RangeSumEven
//  Input				:			Intger,Intger
//  Output				:			Intger 
//  Description			:			It is used to display addition of numbers in between the range.
//  Date				:			7 August 2020
//  Author name			:			Alankar Tamgadge
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int RangeSumEven(
					int iStart,		//input
					int iEnd		//input
	      		 )
{
	int iCnt = 0;
	int iSum = 0;

	if (iStart > iEnd || iStart < 0)
	{
		return -1;
	}		

	else if (iStart == 0 && iEnd == 0)
	{
		return -1;
	}
	else
	{
		for (iCnt = iStart; iCnt <= iEnd; iCnt++)
		{
			if ((iCnt%2) == 0)
			{
				iSum = iSum + iCnt;
			}
		}
	}
	return iSum;
}	