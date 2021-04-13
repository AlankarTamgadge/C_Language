#include"Header.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name		:			FirstOcc
//  Input				:			Integer
//  Output				:			Integer
//  Description			:			It is used to check if number is present in an array.
//  Date				:			19 August 2020
//  Author name			:			Alankar Tamgadge
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int FirstOcc(int iLen, int iNo, int *arr)
{
    int iCnt = 0;
    int iChk = 0;
    
    if(arr == NULL)							// If the pointer is NULL means there is no memory
    {
        return ERRMEMORY;					// return -1
    }
    if(iLen <= 0)							// If the size of array is invalid
    {
        return ERRSIZE;						// return -2
    }
    
    for(iCnt = 0; iCnt < iLen; iCnt++)		// Loop to travel the array
    {
            if(arr[iCnt]  == iNo)			// Check whether number is 11
            {
				iChk = iCnt;
                break;						// Increament Number check Variable
            }
	} 
	if (iChk != iCnt)
	{
		return iCnt;
	}
	else
	{
		return iChk;
	}
}