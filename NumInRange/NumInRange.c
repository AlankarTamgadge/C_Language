#include"Header.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name		:			NumInRange
//  Input				:			Integer
//  Output				:			Display
//  Description			:			It is used to check Occarance of number in a range.
//  Date				:			19 August 2020
//  Author name			:			Alankar Tamgadge
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void NumInRange(int arr[],int iStart, int iEnd, int iLen)
{
    int iCnt = 0;
	int iOcc = -1;
    
    if(arr == NULL)							// If the pointer is NULL means there is no memory
    {
		printf("\nError : Invalid size\n");
		return;					
    }
    if(iLen <= 0)							// If the size of array is invalid
    {
        printf("\nError : Invalid memory address\n");
        return;
    }
    
    for(iCnt = 0; iCnt < iLen; iCnt++)		// Loop to travel the array
    {
            if(arr[iCnt]  >= iStart && arr[iCnt]  <= iEnd)			// Check whether number is 11
            {
				printf("\n%d\t",arr[iCnt]);
				iOcc++;
            }
	}
	if (iOcc < 0)
	{
		printf("\nNo values in Range %d-%d\n",iStart,iEnd);
		return;
	}
	printf("\n");
}