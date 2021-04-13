/*
Problem statement : Accept number from user and if number is less than 50
					then print small , if it is greater than 50 and
					less than 100 then print medium, if it is
					greater than 100 then print large.
					 
 Input : 524		 Output : large
 Input : 74			 Output : medium
 Input : 23			 Output : small
 */

/*
    Algorithm:
 
    START
        Accept number as no
        
			if the number is less than 50
				then small
			if the number is less than 100
				then medium
				
			if the number is more than 100
				then large
	 END

 */

 
 
#include "Header.h"

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);
    
	Number(iValue);
	
    return 0;       // returns to OS
}