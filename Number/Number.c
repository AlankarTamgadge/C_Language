#include"Header.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name		:			Number
//  Input				:			Integer
//  Output				:			Integer
//  Description			:			It is used to show range of a number.
//  Date				:			5 August 2020
//  Author name			:			Alankar Tamgadge
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void Number(
					int iNo		//input
			 )
{
        if (iNo < 50)
        {
            printf("Small");/* code */
        }
        else if (iNo >= 50 && iNo <= 100)
        {
            printf("Medium");
        }
        else
        {
            printf("Large");
        }
}