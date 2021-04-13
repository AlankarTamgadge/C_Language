#include"Header.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name		:			ChkZero
//  Input				:			Interger
//  Output				:			BOOL
//  Description			:			It is used to Check Zero in a Number.
//  Date				:			2 August 2020
//  Author name			:			Alankar Tamgadge
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL ChkZero(int iNo)
{
    int iDigit = 0;
    
	while (iNo != 0)
	{
		iDigit = iNo % 10;
		if (iDigit == 0)
		{
			break;
		}
		iNo = iNo / 10;
	
	}
	if (iDigit == 0)
	{
		return TRUE;
	}
	else 
	{
		return FALSE;
	}
}