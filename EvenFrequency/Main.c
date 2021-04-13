/*
Problem statement : Accept N numbers from user and return frequency of even numbers.

Input			:	N	: 6
Elements		: 85 66 3 80 93 88
Output			: 3

*/

/*
    Algorithm:
 
    START
        Accept value of N from user
		
		create an array that holds the N values by user

		iterate the loop till the length of the array
				check if iEven 
				and
		Display the result.
	 
	 END
 */

#include"Header.h"



int main()
{
    int iValue = 0, iCnt = 0;					
	int iRet = 0;					
	int *ptr = NULL;
    
	printf("\nEnter the value of N : ");
	scanf("%d",&iValue);
	
	ptr = (int *)malloc(sizeof(int)*iValue);
   
	if(ptr == NULL)		 // malloc returns NULL if memory allocation fails
	{
		printf("Unable to allocate memory");
        return -1;      // Return erronious termination signal to the OS
	}

	for (iCnt = 0; iCnt < iValue ; iCnt++)
	{
        scanf("%d",&ptr[iCnt]);     // Accept the Values from user and store into the array
	}
       
	iRet = EvenFrequency(iValue,ptr);

	if(iRet == ERRSIZE)                    // Return due to invalid size
    {
        printf("Error : Invalid size\n");
    }
    else if (iRet == ERRMEMORY)     // Return due to invalid memory
    {
        printf("Error : Invalid memory address\n");
    }
    else                                           // Return due to success
    {
		printf("\nFrequency of Even Numbers is : %d\n",iRet);
    }

    free(ptr);				// Deallocate the dynamic memory allocated by malloc
	
    return 0;				// Return Successfull termination signal to OS
}

