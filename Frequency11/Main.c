/*
Problem statement : Accept N numbers from user and display frequency of 11.

Input : N : 6
Elements : 85 66 3 15 93 88
Output : 0
Input : N : 6
Elements : 85 11 3 15 11 111
Output : 2
*/

/*
    Algorithm:
 
    START
        Accept value of N from user
		
		create an array that holds the N values by user

		iterate the loop till the length of the array
			check each number if its 11 or not
			increment the counter

		display the counter content

	 END
 */

#include"Header.h"



int main()
{
    int iValue = 0;					
	int iCnt = 0, iRet = 0;					
	int *ptr = NULL;
    
	printf("\nEnter the value of N : ");
	scanf("%d",&iValue);
	if (iValue == 0)
	{
		printf("\nNo Input.\n");
		return 0;
	}
	
	ptr = (int *)malloc(sizeof(int)*iValue);

	for (iCnt = 0; iCnt < iValue ; iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	     
	iRet = Frequency11(iValue,ptr);
	
	if(iRet == ERRSIZE)                    // Return due to invalid size
    {
        printf("\nError : Invalid size\n");
    }
    else if (iRet == ERRMEMORY)     // Return due to invalid memory
    {
        printf("\nError : Invalid memory address\n");
    }
    else
    {
        printf("\nFrequency of 11 is : %d.\n",iRet);// Return due to success
    }
    free(ptr);
	
    return 0;       // returns to OS
}

