/*
Problem statement : Accept N numbers from user and display
					summation of digits of each number.


Input : N : 6
Elements : 8225 665 3 76 953 858
Output : 17 17 3 13 17 21

*/



#include"Header.h"



int main()
{
    int iValue = 0, iCnt = 0;
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
    DigitsSum(iValue,ptr);

	free(ptr);				// Deallocate the dynamic memory allocated by malloc
	
    return 0;				// Return Successfull termination signal to OS
}

