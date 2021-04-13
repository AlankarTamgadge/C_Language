#include"Header.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name		:			SmallestNum
//  Input				:			Integer
//  Output				:			Integer
//  Description			:			It is used to display the Smallest number in an array.
//  Date				:			20 August 2020
//  Author name			:			Alankar Tamgadge
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int SmallestNum(int iNum, int *arr)
{
    int iCnt =0;
    int iEven = 0;
	int iSmall = arr[0];
    
	for(iCnt = 1; iCnt < iNum; iCnt++)		// Loop to travel the array
    {
            if(arr[iCnt] < iSmall)			  // Check whether number is Small or not
            {
                iSmall = arr[iCnt];           // Increment the counter
            }
    }
    return iSmall;							// Return the counter
}