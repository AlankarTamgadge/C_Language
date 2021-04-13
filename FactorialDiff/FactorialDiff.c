#include"Header.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name		:			FactorialDiff
//  Input				:			Intger
//  Output				:			Intger 
//  Description			:			It is used to display difference between odd & even factorial.
//  Date				:			9 August 2020
//  Author name			:			Alankar Tamgadge
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int FactorialDiff(
					int iNo		//input
	      		 )
{
	int iCnt = 0;
	int iEvenFact = 1;
	int iOddFact = 1;

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
			if (iCnt%2 == 0)			//Even Factors
			{
				iEvenFact = iEvenFact * iCnt;
			}
			else						//Odd Factors
			{
				iOddFact = iOddFact *iCnt;
			}
		}
		if (iOddFact < iEvenFact)
		{
			return iEvenFact - iOddFact;
		}
		else
		{
			return iOddFact - iEvenFact;
		}
}	