#include"Header.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name		:			Factorial
//  Input				:			Integer
//  Output				:			Integer
//  Description			:			It is used to find Factorial of a number.
//  Date				:			4 August 2020
//  Author name			:			Alankar Tamgadge
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Factorial(
					int iNo		//input
			 )
{
    int iCnt = 0;   
	int iFact = 1;

	if (iNo == 0)
	{
		return -1;
	}

	else if (iNo < 0)
	{
		iNo = -iNo;
	}
	
	
	for(iCnt = iNo; iCnt >0 ; iCnt-- )
	{
		iFact = iFact * iCnt;
	
	}
	

	return iFact;
}