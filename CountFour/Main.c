/*
Problem statement : Accept number from user and count frequency of 2 in it.
 
 Input : 524		 Output : 1
 Input : 73454		 Output : 2
 Input : 23			 Output : 0
 Input : 3444		 Output : 3
 Input : -45		 Output : 1
 */

/*
    Algorithm:
 
    START
        Accept number as no
        
        iterate till no is not equal to zero
            perform no % 10 and store the result into digit
				if the number contains 4 then store it into iCnt
					return result
            perform / 10 with the no
			continue
 
        

 END

 */

 
 
#include "Header.h"

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);
    
	iRet = CountFour(iValue);

	printf("Frequency of 4 is : %d",iRet);
	
    return 0;       // returns to OS
}