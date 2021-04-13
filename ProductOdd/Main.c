/*
Problem statement : Accept N numbers from user and return product of all odd elements.


Input : N : 6
Elements : 15 66 3 70 10 88
Output : 45

Input : N : 6
Elements : 44 66 72 70 10 88
Output : 0


*/

/*
    Algorithm:
 
    START
        Accept value of N from user
		
		create an array that holds the N values by user
		accept another number as NO

		iterate the loop till the length of the array
			check each number if its ODD or not
			store the odd number and multiply each in iCnt
			
		display the result

	 END
 */

#include"Header.h"



int main()
{
    int iValue = 0, iNo = 0;					
	int iCnt = 0, iRet = 0;					
	int *ptr = NULL;
    
	printf("\nEnter the value of N : ");
	scanf("%d",&iValue);
	
	if (iValue <= 0)
	{
		printf("\nInvalid Input.\n");
		return 0;
	}
	ptr = (int *)malloc(sizeof(int)*iValue);

	printf("\nEnter the Values in Array\n");
	for (iCnt = 0; iCnt < iValue ; iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	iRet = ProductOdd(iValue, ptr);
	
	if(iRet == ERRSIZE)						// Return due to invalid size
    {
        printf("\nError : Invalid size\n");
    }
    else if (iRet == ERRMEMORY)				// Return due to invalid memory
    {
        printf("\nError : Invalid memory address\n");
    }
    else if (iRet != 1)
    {
        printf("\nProduct of Odd numbers is %d.\n",iRet);			// Return due to success
    }
    else
    {
        printf("\nOdd numbers not present.\n");		// Return due to success
    }
    free(ptr);
	
    return 0;       // returns to OS
}

