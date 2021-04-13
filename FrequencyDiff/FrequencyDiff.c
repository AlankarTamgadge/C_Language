#include"Header.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name		:			FrequencyDiff
//  Input				:			Integer
//  Output				:			Integer
//  Description			:			It is used to display the difference in Frequency of even and odd numbers in an array.
//  Date				:			18 August 2020
//  Author name			:			Alankar Tamgadge
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int FrequencyDiff(int iNum, int *arr)
{
    int iCnt =0;
    int iDiff = 0;
		
    if(arr == NULL)							// If the pointer is NULL means there is no memory
    {
        return ERRMEMORY;					// return -1
    }
    if(iNum <= 0)							// If the size of array is invalid
    {
        return ERRSIZE;						// return -2
    }
    
    for(iCnt = 0; iCnt < iNum; iCnt++)		// Loop to travel the array
    {
            if((*(arr+iCnt) % 2) == 0)    // Check whether number is even or not
            {
                iDiff = iDiff + arr[iCnt];                   
            }
			else
			{
                iDiff = iDiff - arr[iCnt];                    
            }
    }
	if (iDiff < 0)
	{
		iDiff = -iDiff;
	}
    return iDiff;							// Return the counter
}