/*
Problem statement : Accept a number from user and display its odd factorial of given number.


Input : 5
Output : 15 (5 * 3 * 1)
Input : -5
Output : 15 (5 * 3 * 1)
Input : 10
Output : 945 (9 * 7 * 5 * 3 * 1)

*/

/*
    Algorithm:
 
    START
        Accept number as iValue         

		create 1 variable as iRet to store the result
		create 1 variable as iCnt to count
		iterate iCnt untill iCnt is less greater than zero
			find factorial
				if factorial is odd
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
    
	iRet = OddFactorial(iValue);
	
	printf("Odd Factorial is: %d",iRet);
	
	return 0;       // returns to OS
}