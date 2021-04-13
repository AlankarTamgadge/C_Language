/*
Problem statement : Accept N numbers from user and accept one another number as NO ,
					check whether NO is present or not.

Input : N : 6	NO: 66
Elements : 85 66 3 66 93 88
Output : TRUE

Input : N : 6	NO: 12
Elements : 85 11 3 15 11 111
Output : FALSE

*/

/*
    Algorithm:
 
    START
        Accept value of N from user
		
		create an array that holds the N values by user
		accept another number as NO

		iterate the loop till the length of the array
			check each number if its NO or not
			

		display the result

	 END
 */

#include"Header.h"



int main()
{
    int iValue = 0, iNo = 0;					
	int iCnt = 0;
	BOOL iRet = FALSE;					
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
	     
	
	printf("\nEnter the number to be found : ");
	scanf("%d",&iNo);
	
	iRet = CheckNumber(iValue,iNo,ptr);
	
	if(iRet == ERRSIZE)						// Return due to invalid size
    {
        printf("\nError : Invalid size\n");
    }
    else if (iRet == ERRMEMORY)				// Return due to invalid memory
    {
        printf("\nError : Invalid memory address\n");
    }
    else if (iRet == TRUE)
    {
        printf("\n%d is present");			// Return due to success
    }
    else
    {
        printf("\n%d is Not present");		// Return due to success
    }
    free(ptr);
	
    return 0;       // returns to OS
}

