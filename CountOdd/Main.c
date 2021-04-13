/*
Problem statement : Accept number from user and return the count of Odd digits in it.

 Input : 524		 Output : 1
 Input : 73454		 Output : 3
 Input : 23786		 Output : 2
 Input : 34			 Output : 1
 Input : -55		 Output : 2
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
    
	iRet = CountOdd(iValue);

	printf("Number of Odd digits is : %d",iRet);
	
    return 0;       // returns to OS
}