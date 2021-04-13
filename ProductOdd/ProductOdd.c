#include"Header.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name		:			ProductOdd
//  Input				:			Integer
//  Output				:			Integer
//  Description			:			It is used to product of odd number in an array.
//  Date				:			20 August 2020
//  Author name			:			Alankar Tamgadge
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int ProductOdd(int iLen, int *arr)
{
    int iCnt = 0;
	int iMul = 1;
    
    if(arr == NULL)							// If the pointer is NULL means there is no memory
    {
        return ERRMEMORY;					// return -11
    }
    if(iLen <= 0)							// If the size of array is invalid
    {
        return ERRSIZE;						// return -22
    }
    
    for(iCnt = 0; iCnt < iLen; iCnt++)		// Loop to travel the array
    {

		if(arr[iCnt] % 2  != 0)				// Check whether number is 11
		{
			iMul = iMul * arr[iCnt];
		}
		
	}
	if (iMul != 1)
	{
		return iMul;
	}
	else
	{
		return 1;
	}
}