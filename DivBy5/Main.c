/*
Problem statement : Accept N numbers from user and display all such elements
					which are divisible by 5.


Input : N : 6
Elements : 85 66 3 80 93 88
Output : 53 (234 - 181)

*/

/*
    Algorithm:
 
    START
        Accept value of N from user
		
		create an array that holds the N values by user

		iterate the loop till the length of the array
			display each number that is divisible by 5 

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

	DivBy5(iValue,ptr);

    free(ptr);
	
    return 0;       // returns to OS
}

