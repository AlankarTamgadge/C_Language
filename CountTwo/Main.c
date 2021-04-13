/*
Problem statement : Accept number from user and count frequency of 2 in it.
 
 Input : 1278   Output : 1
 Input : 121    Output : 1
 Input : 272   Output : 2
 Input : 202   Output : 2
 Input : -56    Output : 0
 */

/*
    Algorithm:
 
    START
        Accept number as no
        
        iterate till no is not equal to zero
            perform no % 10 and store the result into digit
				if the number contains 2 then store it into iCnt
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
    
	iRet = CountTwo(iValue);

	printf("Frequency of 2 is : %d",iRet);
	
    return 0;       // returns to OS
}