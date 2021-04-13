#include"Header.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name		:			CountRange
//  Input				:			Integer
//  Output				:			Integer
//  Description			:			It is used to count number of digits between 3 to 7.
//  Date				:			4 August 2020
//  Author name			:			Alankar Tamgadge
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int CountRange(
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
		if (iDigit > 3 && iDigit < 7)
		{
			iCnt++;
		}
		iNo = iNo / 10;
	
	}
	return iCnt;
}