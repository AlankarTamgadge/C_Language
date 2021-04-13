/*
Problem statement : Accept N numbers from user and accept one another number as NO ,
					return index of first occurrence of that NO.

Input : N : 6
NO: 66
Elements : 85 66 3 66 93 88
Output : 1

*/

/*
    Algorithm:
 
    START
        Accept value of N from user
		
		create an array that holds the N values by user
		accept another number as NO

		iterate the loop till the length of the array
			check each number if its NO or not
			store the index count value in iCnt

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
	     
	
	printf("\nEnter the number to be found : ");
	scanf("%d",&iNo);
	
	iRet = FirstOcc(iValue,iNo,ptr);
	
	if(iRet == ERRSIZE)						// Return due to invalid size
    {
        printf("\nError : Invalid size\n");
    }
    else if (iRet == ERRMEMORY)				// Return due to invalid memory
    {
        printf("\nError : Invalid memory address\n");
    }
    else if (iRet == 0)
    {
        printf("\n%d is at Index %d.\n",iNo,iRet);			// Return due to success
    }
    else
    {
        printf("\n%d is Not present.\n");		// Return due to success
    }
    free(ptr);
	
    return 0;       // returns to OS
}

