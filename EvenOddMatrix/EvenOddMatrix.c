#include"Header.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name		:			EvenOddMatrix
//  Input				:			Intger,Integer
//  Output				:			Display 
//  Description			:			It is used to display pattern of Numbers.
//  Date				:			8 August 2020
//  Author name			:			Alankar Tamgadge
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void EvenOddMatrix(
						int iRow,		//input
						int iCol		//input
				)
{
	int i = 0, j = 0,k=0;
	
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
	else{
	int iCnt = 1;
	for(i=1; i<=iRow; i++)
	{
		if(iCnt>iRow*2){iCnt=1;}
		if(i%2 != 0)
		{
			for (j=1; j<=iCol; j++)
			{
				printf("%d\t",iCnt);
			
			iCnt+=2;
			if(iCnt>iRow*2){iCnt=2;}

			}
		}
		else
		{
			for (j=1; j<=iCol; j++)
			{
				printf("%d\t",iCnt);
			
			iCnt+=2;
		if(iCnt>iRow*2){iCnt=1;}
		}}

	printf("\n");
	}
}

}