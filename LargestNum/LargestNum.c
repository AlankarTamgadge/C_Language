#include"Header.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name		:			LargestNum
//  Input				:			Integer
//  Output				:			Integer
//  Description			:			It is used to display the Largest number in an array.
//  Date				:			20 August 2020
//  Author name			:			Alankar Tamgadge
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int LargestNum(int iNum, int *arr)
{
    int iCnt =0;
    int iEven = 0;
	int iLarge = arr[0];
    
	for(iCnt = 1; iCnt < iNum; iCnt++)		// Loop to travel the array
    {
            if(arr[iCnt] > iLarge)			  // Check whether number is largest or not
            {
                iLarge = arr[iCnt];           // Increment the counter
            }
    }
    return iLarge;							// Return the counter
}