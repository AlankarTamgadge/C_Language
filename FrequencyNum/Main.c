/*
Problem statement : Accept N numbers from user and display frequency of 11.

Input : N : 6
		NO: 66
Elements : 85 66 3 66 93 88

Output : 2

Input : N : 6
		NO: 12
Elements : 85 11 3 15 11 111

Output : 0

*/

/*
    Algorithm:
 
    START
        Accept value of N from user
		
		create an array that holds the N values by user
		accept another number as NO

		iterate the loop till the length of the array
			check each number if its NO or not
			increment the counter

		display the counter content

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
	
	printf("\nEnter the number to be found : ");
	scanf("%d",&iNo);
	
	ptr = (int *)malloc(sizeof(int)*iValue);

	for (iCnt = 0; iCnt < iValue ; iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	     
	iRet = FrequencyNum(iValue,iNo,ptr);
	
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
        printf("\nFrequency of %d is : %d.\n",iNo,iRet);// Return due to success
    }
    free(ptr);
	
    return 0;       // returns to OS
}

