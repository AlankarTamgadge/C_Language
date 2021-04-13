#include"Header.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name		:			TwoCharMatrix
//  Input				:			Intger,Integer
//  Output				:			Display 
//  Description			:			It is used to display pattern.
//  Date				:			11 August 2020
//  Author name			:			Alankar Tamgadge
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void TwoCharMatrix(
						int iRow,		//input
						int iCol		//input
				)
{
	int i = 0, j = 0;
	if (iRow != iCol)
	{
		printf("Invalid Input.\n");
	}
	
	else if ((iRow < 0) && (iCol < 0))
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
	int i = 0, j = 0;

	for ( i = 1; i <= iRow; i++)
	{
		for ( j = 1; j <= iCol; j++)
		{
			if (i<j)
			{
				printf("#\t");
			}
			else
			{
				printf("*\t");
			}
			
		}
		
		printf("\n");	
	}	
		printf("\n");
	}
}

