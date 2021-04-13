#include"Header.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name		:			Check11
//  Input				:			Integer
//  Output				:			Boolean
//  Description			:			It is used to check numbers contain 11 in it.
//  Date				:			19 August 2020
//  Author name			:			Alankar Tamgadge
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


BOOL Check11(int iNum, int *arr)
{
    int iCnt =0;
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
            if(arr[iCnt]  == 11)			// Check whether number is 11
            {
				iChk++;						// Increament Number check Variable
				break;
            }
	} 

	if(iChk != 0)
	{
		return TRUE;                // Return the counter
	}
	else
	{
		return FALSE;				// Return the counter
	}
}