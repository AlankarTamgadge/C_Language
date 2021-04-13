/*
Problem statement : Accept number from user and return the count of Odd digits in it.

 Input : 524		 Output : 3
 Input : 734		 Output : 1
 Input : 23716		 Output : 2
 Input : 35			 Output : 1
 Input : -3467		 Output : 2
 */

/*
    Algorithm:
 
    START
        Accept number as no
        
        iterate till no is not equal to zero
            perform no % 10 and store the result into digit
			create icnt to count the digits
				if the number of digits between 3 & 7 then inrement iCnt
					
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
    
	iRet = CountRange(iValue);

	printf("Number of digits between 3 & 7 is : %d",iRet);
	
    return 0;       // returns to OS
}