/*
Problem statement : Accept N numbers from user and return difference between summation 
					of even elements and summation of odd elements.


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
				take iEven to store the sum of all even numbers
				and
				take iOdd to store the sum of all odd numbers
		perform the substraction of iEven and iOdd

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
	if(p == NULL)
	{
		printf("Unable to allocate memory");
		return -1;
	}

	for (iCnt = 0; iCnt < iValue ; iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
       
	iRet = EvnOddDiff(iValue,ptr);

    printf("\nDifference is : %d\n",iRet);

	free(ptr);
	
    return 0;       // returns to OS
}

