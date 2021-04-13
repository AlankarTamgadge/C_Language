#include"Header.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name		:			DigitsSum
//  Input				:			Integer
//  Output				:			Display
//  Description			:			It is used to display summation of digits of each number.
//  Date				:			20 August 2020
//  Author name			:			Alankar Tamgadge
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void DigitsSum(int iNum, int *arr)
{
    int iCnt =0;
    int iSum = 0;
	int i = 0;
	int iDigit = 0;
	
	for(iCnt = 0; iCnt < iNum; iCnt++)		// Loop to travel the array
    {
		iSum = 0;
		if (arr[iCnt] < 0)
		{
			arr[iCnt] = -arr[iCnt];
		}		
		//			-6789
		for(i = arr[iCnt]; i > 0 ; i--)
		{
		
			iDigit = arr[iCnt] % 10;	// 9	
			
			iSum = iSum + iDigit;		// 9

			arr[iCnt] = arr[iCnt] / 10;	// 678
		}
		
		printf("%d\t",iSum);							// Return the counter
    }
}