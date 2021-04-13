/*
Problem statement : Accept N numbers from user and return the
					difference between largest and smallest number.


Input : N : 6
Elements : 85 66 3 66 93 88
Output : 90 (93 -3)

*/

/*
    Algorithm:
 
    START
        Accept value of N from user
		
		create an array that holds the N values by user

		iterate the loop till the length of the array
				check if number is smaller than the previous  
					store in variable iSmall
				otherwise store in iLarge
				Find the differnce between the largest and the smallest number	
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
	if (iValue <= 0)
	{
		printf("\nINVALID INPUT\n");
        return 0;					 // Return successfull termination signal to the OS
	}
	
	printf("\nEnter the values in of array : \n");
	ptr = (int *)malloc(sizeof(int)*iValue);
   
	if(ptr == NULL)		 // malloc returns NULL if memory allocation fails
	{
		printf("\nUnable to allocate memory\n");
        return -1;      // Return erronious termination signal to the OS
	}

	for (iCnt = 0; iCnt < iValue ; iCnt++)
	{
        scanf("%d",&ptr[iCnt]);     // Accept the Values from user and store into the array
	}
       
	iRet = NumDiffference(iValue,ptr);
	if(iRet>0)
	{
		printf("\nDifference is : %d\n",iRet);
	}
	else
	{
		printf("\nBoth the largest and smallest numbers are same.\n");
	}
    free(ptr);				// Deallocate the dynamic memory allocated by malloc
	
    return 0;				// Return Successfull termination signal to OS
}

