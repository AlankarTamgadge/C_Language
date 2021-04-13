#include"Header.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name		:			Table
//  Input				:			Integer
//  Output				:			Display
//  Description			:			It is used to display table of a digit.
//  Date				:			5 August 2020
//  Author name			:			Alankar Tamgadge
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Table(
					int iNo		//input
			 )
{
    int iDigit = 0;				//Local Variable to store each digit

	if (iNo != 0)
	{
		for (iDigit = 1; iDigit <=10 ; iDigit++)
		{
			printf("%d  ",(iNo * iDigit));
		}
	}
	else
	{
		printf("Invalid Input");
	}
}