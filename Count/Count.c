#include"Header.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name		:			CountNum
//  Input				:			Integer
//  Output				:			Integer
//  Description			:			It is used to count frequency of such a digits which are less than 6.
//  Date				:			3 August 2020
//  Author name			:			Alankar Tamgadge
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int CountNum(
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
		if (iDigit < 6 )
		{
			iCnt++;
		}
		iNo = iNo / 10;
	
	}
	return iCnt;
}