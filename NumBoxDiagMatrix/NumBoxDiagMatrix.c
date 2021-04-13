#include"Header.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name		:			NumBoxDiagMatrix
//  Input				:			Intger,Integer
//  Output				:			Display 
//  Description			:			It is used to display pattern.
//  Date				:			11 August 2020
//  Author name			:			Alankar Tamgadge
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void NumBoxDiagMatrix(
						int iRow,		//input
						int iCol		//input
				)
{
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
	 
	
	int i = 0, j = 0;

	for (i = 1;i <= iRow; i++ )	
	{			 
		for(j = 1; j<= iCol; j++)     
		{
			if (i==j || i == iRow || j==iCol || j==1 || i==1)
			{
				printf("%d\t",j);
			}
			else{printf(" \t");}
			

		}
		
		printf("\n");
	}
		printf("\n");
	
}

