#include"Header.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name		:			CountTwo
//  Input				:			Integer
//  Output				:			Integer
//  Description			:			It is used to Count Two in a Number.
//  Date				:			2 August 2020
//  Author name			:			Alankar Tamgadge
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int CountTwo(
					int iNo		//input
			 )
{
    int iDigit = 0;				//Local Variable to store each digit
    int iCnt = 0;

	while (iNo != 0)
	{
		iDigit = iNo % 10;
		if (iDigit == 2 || iDigit == -2)
		{
			iCnt++;
		}
		iNo = iNo / 10;
	
	}
	return iCnt;
}