#include"Header.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name		:			CheckNumber
//  Input				:			Integer
//  Output				:			BOOL
//  Description			:			It is used to check if number is present in an array.
//  Date				:			19 August 2020
//  Author name			:			Alankar Tamgadge
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


BOOL CheckNumber(int iNum, int iNo, int *arr)
{
    int iCnt = 0;
    int iChk = 0;
    
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
            if(arr[iCnt]  == iNo)			// Check whether number is 11
            {
				iChk++;
                break;						// Increament Number check Variable
            }
	} 
	if (iChk > 0)
    {
        return TRUE;
    }                // Return the counter
    else
    {
        return FALSE;
    }
}