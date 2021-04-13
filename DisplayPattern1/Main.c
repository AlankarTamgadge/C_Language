/*
Problem statement : Accept number from user and display below pattern.

Input : 5
Output : * * * * * # # # # #
Input : 6
Output : * * * * * * # # # # # # #
Input : -5
Output : * * * * * # # # # #
Input : 2
Output : * * # #

*/

/*
    Algorithm:
 
    START
        Accept number 1 as iValue1 
			print # pattern iValue times
			print * pattern iValue times
		Display the pattern
	 
	 END



 */

 
 
#include "Header.h"

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);
    
	DisplayPattern1(iValue);
	
    return 0;       // returns to OS
}