/*
Problem statement : Accept a number from user and display its even factorial of given number.


Input : 5
Output : 8 (4 * 2)
Input : -5
Output : 8 (4 * 2)
Input : 10
Output : 3840 (10 * 8 * 6 * 4 * 2)

*/

/*
    Algorithm:
 
    START
        Accept number as iValue         

		create 1 variable as iRet to store the result
		create 1 variable as iCnt to count
		iterate iCnt untill iCnt is less greater than zero
			find factorial
				if factorial is even
					then multiply it with our result
				otherwise 
				cont
			display result
	 END

 */

 
 
#include "Header.h"

int main()
{
    int iValue = 0;
	int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);
    
	iRet = EvenFactorial(iValue);
	
	if (iRet == -1)
	{
		printf("Even Factor is None");
	}
	else
	{
		printf("Even Factorial is: %d",iRet);
	}
	return 0;       // returns to OS
}