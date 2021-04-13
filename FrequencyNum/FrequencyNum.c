#include"Header.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name		:			FrequencyNum
//  Input				:			Integer
//  Output				:			Integer
//  Description			:			It is used to frequency of 11 in an array.
//  Date				:			19 August 2020
//  Author name			:			Alankar Tamgadge
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int FrequencyNum(int iNum, int iNo, int *arr)
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
            if(arr[iCnt]  == iNo)			// Check whether number is 11
            {
				iChk++;						// Increament Number check Variable
            }
	} 
	return iChk;                // Return the counter
}