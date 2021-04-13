#include"Header.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name		:			CharTwoMatrix
//  Input				:			Intger,Integer
//  Output				:			Display 
//  Description			:			It is used to display pattern.
//  Date				:			11 August 2020
//  Author name			:			Alankar Tamgadge
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void CharTwoMatrix(
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
		for ( j = i; j <= iCol; j++)
		{
			printf("*\t");	
		}
		for (j =1 ;j <= i+1 ;j++ )
		{
			printf("#\t");
		}
		printf("\n");
	}	
		
	}
}

