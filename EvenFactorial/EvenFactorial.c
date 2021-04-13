#include"Header.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name		:			EvenFactorial
//  Input				:			Intger
//  Output				:			Intger 
//  Description			:			It is used to display even factorial.
//  Date				:			7 August 2020
//  Author name			:			Alankar Tamgadge
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int EvenFactorial(
					int iNo		//input
	      		 )
{
	int iCnt = 0;
	int iFact = 1;

	if (iNo < 0)
	{
		iNo = -iNo;
	}		

	else if (iNo == 0)
	{
		return -1;
	}
	for (iCnt = iNo; iCnt > 0; iCnt--)
		{
			if (iCnt%2 == 0)
			{
				iFact = iFact * iCnt;
			}
		}
	return iFact;
}	