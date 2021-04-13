#include"Header.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name		:			Percentage
//  Input				:			Interger,Integer
//  Output				:			Floating Point Integer
//  Description			:			It is used to calculate Percentage.
//  Date				:			2 August 2020
//  Author name			:			Alankar Tamgadge
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void ReverseDisplay(int iNo)
{
    int iDigit = 0;
    
    if(iNo < 0)    // Updator which is used to convert negative to positive
    {
        iNo = -iNo;
    }
	else if (iNo == 0)
	{
		printf("%d \n",iNo);
	}
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iNo = iNo / 10;
    }
}