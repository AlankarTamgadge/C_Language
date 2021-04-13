#include"Header.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name		:			MultDigits
//  Input				:			Integer
//  Output				:			Integer
//  Description			:			It is used to return multiplication of all digits.
//  Date				:			4 August 2020
//  Author name			:			Alankar Tamgadge
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int MultDigits(
					int iNo		//input
			 )
{
    int iDigit = 0;				//Local Variable to store each digit
    int iMult = 1;

	if (iNo < 0)
	{
		iNo = -iNo;
	}

	while (iNo > 0)
	{
		iDigit = iNo % 10;
		iMult = iMult * iDigit;
		iNo = iNo / 10;
	
	}
	return iMult;
}