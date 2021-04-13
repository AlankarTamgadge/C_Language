/*
Problem statement : Accept number from user and return the Multiplication of digits in it.

 Input : 524		 Output : 40
 Input : 734		 Output : 84
 Input : 23716		 Output : 256
 Input : 35			 Output : 15
 Input : -346		 Output : 84
 */

/*
    Algorithm:
 
    START
        Accept number as no
        
        iterate till no is not equal to zero
            perform no % 10 and store the result into digit
			create icnt to count the digits
				multiply each digit with next one 
				store into iMul
					
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
    
	iRet = MultDigits(iValue);

	printf("Multiplication of digits is : %d",iRet);
	
    return 0;       // returns to OS
}