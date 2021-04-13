/*
Problem statement : Accept number from user and check whether it contains 0 in it or not.
 
 Input : 1278   Output : FALSE
 Input : 121    Output : TRUE
 Input : 272   Output : TRUE
 Input : 202   Output : TRUE
 Input : -56    Output : FALSE
 */

/*
    Algorithm:
 
    START
        Accept number as no
        
        iterate till no is not equal to zero
            perform no % 10 and store the result into digit
				if the reverse number and original number is same
				then return TRUE
			otherwise
				return FALSE
            perform / 10 with the no
			continue
 
        

 END

 */

 
 
#include "Header.h"

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number\n");
    scanf("%d",&iValue);
    
	bRet = ChkZero(iValue);

	if (bRet == TRUE)
	{
		printf("Number contains Zero");
	}
    else
	{
		printf("Number does not contain Zero");
	}		
	
    return 0;       // returns to OS
}