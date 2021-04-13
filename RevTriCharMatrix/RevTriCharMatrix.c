#include"Header.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name		:			RevTriCharMatrix
//  Input				:			Intger,Integer
//  Output				:			Display 
//  Description			:			It is used to display pattern.
//  Date				:			12 August 2020
//  Author name			:			Alankar Tamgadge
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void RevTriCharMatrix(
						int iRow,		//input
						int iCol		//input
				)
{
	int i = 0, j = 0;
	if (iRow == 0 || iCol == 0 || (iRow == 0 && iCol ==0) )
	{
		printf("Invalid Input.\n");
		return;
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
	
	else if (iRow != iCol)
	{
		printf("Invalid Input.\n");
		return;
	}
	 
	{
	int i = 0, j = 0;

	for (i = 1;i <= iRow; i++ )	
	{			 
		for(j = iCol; j >= 1; j--)
		{
			if (i==j)
			{
				printf("#\t",j);

			}
			else if (i<j)
			{
				printf("*\t",j);
			}
			else
			{
				printf("@\t",j);
			}
		}
		printf("\n");
	}
		printf("\n");
	}
}

