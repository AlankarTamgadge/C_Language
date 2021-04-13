/*
Problem statement : Accept number from user and display below pattern.

Input : 5
Output : 5 # 4 # 3 # 2 # 1 #

*/

/*
    Algorithm:
 
    START
        Accept number as iValue1 
		Display the pattern upto corresponding iValue
	 
	 END



 */

 
 
#include "Header.h"

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);
    
	NumberHashPattern(iValue);
	
    return 0;       // returns to OS
}