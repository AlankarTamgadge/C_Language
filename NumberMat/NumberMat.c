#include"Header.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name		:			NumberMat
//  Input				:			Intger,Integer
//  Output				:			Display 
//  Description			:			It is used to display pattern of Numbers.
//  Date				:			8 August 2020
//  Author name			:			Alankar Tamgadge
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void NumberMat(
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
	int iCnt = 1;
	for (i = 1; i <= iRow; i++)
	{
		for (j = 1; j <= iCol ; j++ )
		{
			printf("%d ",iCnt);
			iCnt++;
			
			if (iCnt >= 10)
			{
				iCnt = 1;
			}
		}
	printf("\n");
	}
}

