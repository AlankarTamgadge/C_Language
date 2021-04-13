/*
Problem statement : Accept number from user and return difference between
					summation of even digits and summation of odd digits.

 Input : 524		 Output : 1
 Input : 73454		 Output : 7
 Input : 23786		 Output : 6
 Input : 34			 Output : 1
 Input : -55		 Output : 0
 */

/*
    Algorithm:
 
    START
        Accept number as no
        
        iterate till no is not equal to zero
            perform no % 10 and store the result into digit
			create icnt to count the digits
				if the number contains odd digit then inrement iCnt
					
            perform / 10 with the no
			continue
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
    
	iRet = CountDiff(iValue);
	if (iRet < 0)
	{
		iRet = -iRet;
	}

	printf("Difference is : %d",iRet);
	
    return 0;       // returns to OS
}