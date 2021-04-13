#include"Header.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name		:			CountDiff
//  Input				:			Integer
//  Output				:			Integer
//  Description			:			It is used to count difference between even and odd digits.
//  Date				:			4 August 2020
//  Author name			:			Alankar Tamgadge
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int CountDiff(
					int iNo		//input
			 )
{
	int iDigit = 0;
    int iEvenDigit = 0;				//Local Variable to store even digit
    int iOddDigit = 0;				//Local Variable to store odd digit

    int iCnt = 0;

	if (iNo < 0)
	{
		iNo = -iNo;
	}

	while (iNo > 0)
	{
		iDigit = iNo % 10;
		if (iDigit % 2 == 0 )
		{
			iEvenDigit += iDigit;
		}
		else
		{
			iOddDigit += iDigit;
		}
		iNo = iNo / 10;
	
	}
	return iEvenDigit - iOddDigit;
}