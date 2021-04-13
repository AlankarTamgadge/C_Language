#include"Header.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name		:			LastOcc
//  Input				:			Integer
//  Output				:			Integer
//  Description			:			It is used to check Last Occarance of number in an array.
//  Date				:			19 August 2020
//  Author name			:			Alankar Tamgadge
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int LastOcc(int iLen, int iNo, int *arr)
{
    int iCnt = 0;
    int iOcc = -1;
    
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
            if(arr[iCnt]  == iNo)			// Check whether number is 11
            {
				iOcc = iCnt;
            }
	}
	if (iOcc == -1)
	{
		return -1;
	}
	else if (iOcc != -1)
	{
		return iOcc;
	}
	
}