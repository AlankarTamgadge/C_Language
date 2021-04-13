/*
Problem statement : Accept number from user and return its factorial.

*/

/*
    Algorithm:
 
    START
        Accept number as no as iValue

		
		return result
 
        

 END

 */

 
 
#include "Header.h"

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);
    
	iRet = Factorial(iValue);
	if (iRet == -1)
	{
		printf("Factorial of 0 is : 1\n");
	}
	else
	{
		printf("Factorial of %d is : %d",iValue,iRet);
	}
    return 0;       // returns to OS
}