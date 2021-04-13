#include"Header.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name		:			Division
//  Input						:			Integrer, Interger
//  Output						:			Interger
//  Description				:			It is used to perform Division of two numbers
//  Date							:			25 July 2020
//  Author name			:			Alankar Tamgadge
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Division(
                    int iValue1,        // First number
                    int iValue2         // Second numbber
                )
{
	
    int iAns = 0;                      // Local variable to store Division
    if(iValue1 < iValue2)
    {
        return -1;
    }
    iAns = iValue1 / iValue2;
 
    return iAns;                        // Return the Division
}