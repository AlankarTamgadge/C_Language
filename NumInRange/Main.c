/*
Problem statement : Accept N numbers from user and accept Range,
					Display all elements from that range.

Input : N : 6
Start: 60
End : 90
Elements : 85 66 3 76 93 88
Output : 66 76 88

*/

/*
    Algorithm:
 
    START
        Accept value of N from user
		
		create an array that holds the N values by user
		accept another numbers as iStart and iEnd for range

		iterate the loop till the length of the array
			check each number if its between the range or not
			if it is
				display the number
			otherwise keep itirating
	 END
 */

#include"Header.h"



int main()
{
    int iStart = 0, iEnd = 0;					
	int iCnt = 0, iValue = 0, iRet = 0;					
	int *ptr = NULL;
    
	printf("\nEnter the value of N : ");
	scanf("%d",&iValue);
	
	if (iValue <= 0)
	{
		printf("\nInvalid Input.\n");
		return 0;
	}

	printf("\nEnter the Range: ");
	scanf("%d %d",&iStart, &iEnd);

	ptr = (int *)malloc(sizeof(int)*iValue);

	printf("\nEnter the Values in Array\n");
	for (iCnt = 0; iCnt < iValue ; iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	     
	NumInRange(ptr, iStart, iEnd, iValue);
	
    free(ptr);
	
    return 0;       // returns to OS
}

