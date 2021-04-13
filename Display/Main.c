#include "Header.h"
/*
	Problem statement : Accept single digit number from user and print it into word.

 
	 Input : 524		 Output : large
	 Input : 74			 Output : medium
	 Input : 23			 Output : small
 */
int main()
{
    int iValue = 0;			//local Variable
    int iRet = 0;

    printf("Enter a Single Digit Number: \n");
    scanf("%d",&iValue);
    
	Display(iValue);
	
    return 0;       // returns to OS
}