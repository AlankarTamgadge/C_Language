#include"Header.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name		:			EvnOddDiff
//  Input				:			Integer
//  Output				:			Integer
//  Description			:			It is used to display the Difference of Odd and even numbers in an array.
//  Date				:			18 August 2020
//  Author name			:			Alankar Tamgadge
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int EvnOddDiff(int iNum, int *arr)
{
	int iDiff = 0;
	int iCnt = 0;

	for (iCnt = 0; iCnt < iNum; iCnt++)
	{
		if ((*(arr+iCnt))%2 == 0)
		{
			iDiff = iDiff + arr[iCnt];
		}
		else
		{
			iDiff = iDiff - arr[iCnt];
		}
	}
	if (iDiff<0)
	{
		iDiff = -iDiff;
	}
	return iDiff;
}