#include"Header.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name		:			CountEven
//  Input				:			Integer
//  Output				:			Integer
//  Description			:			It is used to count number of Odd digits.
//  Date				:			3 August 2020
//  Author name			:			Alankar Tamgadge
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int CountEven(
					int iNo		//input
			 )
{
    int iDigit = 0;				//Local Variable to store each digit
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
			iCnt++;
		}
		iNo = iNo / 10;
	
	}
	return iCnt;
}