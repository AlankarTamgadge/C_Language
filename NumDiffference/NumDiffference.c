#include"Header.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name		:			NumDiffference
//  Input				:			Integer
//  Output				:			Integer
//  Description			:			It is used to display difference between largest and smallest number.
//  Date				:			20 August 2020
//  Author name			:			Alankar Tamgadge
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int NumDiffference(int iNum, int *arr)
{
    int iCnt =0;
    int iLarge = arr[0];
	int iSmall = arr[0];
    
	for(iCnt = 1; iCnt < iNum; iCnt++)		// Loop to travel the array
    {
			if(arr[iCnt] > iLarge)
			{
				iLarge = arr[iCnt];
			}
			if(arr[iCnt] < iSmall)			  // Check whether number is Small or not
            {
                iSmall = arr[iCnt];           // Increment the counter
            }

    }
	if (iSmall == iLarge)
	{
		return -1;
	}
	else
	{
		return iLarge - iSmall;							// Return the counter
	}
}