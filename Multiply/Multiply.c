#include"Header.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name		:			Multiply
//  Input				:			Interger,Integer
//  Output				:			Integer
//  Description			:			It is used to multiply 3 numbers.
//  Date				:			28 July 2020
//  Author name			:			Alankar Tamgadge
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Multiply(
                    int iNo1,		// Input number1
					int iNo2,		// Input number2	
					int iNo3		// Input number2
            )
{
	if (iNo1 == 0 && iNo2 == 0 && iNo3 == 0)
	{
       return 0;
	}
    else if(iNo1 == 0)
    {
        iNo1 = 1;
    }
	else if(iNo2 == 0)
    {
        iNo2 = 1;
	}
	else if(iNo3 == 0)
    {
        iNo3 = 1;
    }
	
	return iNo1 * iNo2 * iNo3;  
	
 
}