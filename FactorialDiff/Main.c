/*
Problem statement : Accept a number from user and return difference
					between Even factorial and odd factorial.


Input : 5
Output : -7 (8 - 15)
Input : -5
Output : -7 (8 - 15)
Input : 10
Output : 2895 (3840 - 945)

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
					then store it into iEvenFact
				otherwise 
					then store it into iOddFact
				cont
				find the difference(DIFFERENCE IS NEVER -VE)
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
    
	iRet = FactorialDiff(iValue);
	
	if (iRet == -1)
	{
		printf("Even Factor is None");
	}
	else
	{
		printf("Difference is: %d",iRet);
	}
	return 0;       // returns to OS
}