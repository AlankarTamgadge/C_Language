#include"Header.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name		:			TableRev
//  Input				:			Integer
//  Output				:			Display
//  Description			:			It is used to display table of a digit in reverse oder.
//  Date				:			5 August 2020
//  Author name			:			Alankar Tamgadge
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void TableRev(
					int iNo		//input
			 )
{
    int iDigit = 0;				//Local Variable to store each digit

	if (iNo != 0)
	{
		for (iDigit = 10; iDigit > 0 ; iDigit--)
		{
			printf("%d  ",(iNo * iDigit));
		}
	}
	else
	{
		printf("Invalid Input");
	}
}