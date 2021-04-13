#include"Header.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name		:			NumberRevMatrix
//  Input				:			Intger,Integer
//  Output				:			Display 
//  Description			:			It is used to display pattern of numbers in Reverse.
//  Date				:			10 August 2020
//  Author name			:			Alankar Tamgadge
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void NumberRevMatrix(
						int iRow,		//input
						int iCol		//input
				)
{
	int i = 0, j = 0;
	
	if ((iRow < 0) && (iCol < 0))
	{
		iCol = -iCol;
		iRow = -iRow;
	}
	else if (iRow < 0)
	{
		iRow = -iRow;
	}
	else if (iCol < 0)
	{
		iCol = -iCol;
	}
	
	else if (iRow == 0 || iCol == 0 || (iRow == 0 && iCol ==0) )
	{
		printf("Invalid Input.\n");
	}
	else
	{
	
		for (i = 1; i <= iRow; i++)
		{
			for (j = iCol; j > 0 ; j-- )
			{
				printf("%d ",j);
			}
		printf("\n");
		}
	}
}

