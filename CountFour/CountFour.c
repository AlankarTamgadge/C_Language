#include"Header.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name		:			CountFour
//  Input				:			Integer
//  Output				:			Integer
//  Description			:			It is used to Count Four in a Number.
//  Date				:			2 August 2020
//  Author name			:			Alankar Tamgadge
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int CountFour(
					int iNo		//input
			 )
{
    int iDigit = 0;				//Local Variable to store each digit
    int iCnt = 0;

	while (iNo != 0)
	{
		iDigit = iNo % 10;
		if (iDigit == 4 || iDigit == -4)
		{
			iCnt++;
		}
		iNo = iNo / 10;
	
	}
	return iCnt;
}