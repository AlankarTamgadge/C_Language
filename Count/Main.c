/*
Problem statement : Accept number from user and count frequency
					of such a digits which are less than 6.
 
 Input : 524		 Output : 3
 Input : 73454		 Output : 4
 Input : 23789		 Output : 2
 Input : 3444		 Output : 4
 Input : -45		 Output : 2
 */

/*
    Algorithm:
 
    START
        Accept number as no
        
        iterate till no is not equal to zero
            perform no % 10 and store the result into digit
				if the number contains digit less than 6 then inrement iCnt
					
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
    
	iRet = CountNum(iValue);

	printf("Frequency of Numbers less than 6 is : %d",iRet);
	
    return 0;       // returns to OS
}