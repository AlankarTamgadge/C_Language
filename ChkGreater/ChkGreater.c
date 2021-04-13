#include"Header.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name		:			ChkGreater
//  Input				:			Interger
//  Output				:			BOOLEAN
//  Description			:			It is used to check whether number is greater than 100 or not.
//  Date				:			28 July 2020
//  Author name			:			Alankar Tamgadge
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL ChkGreater(
                    int iNo       // Input numbber
              )
{
	
    if(iNo > 100)
    {
        return TRUE;
    }
	else
	{
		return FALSE;
	}
 
}