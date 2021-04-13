/*
Problem statement : Accept number from user and display below pattern.

Input : 7
Output : 2 4 6 8 10 12 14 16

*/

/*
    Algorithm:
 
    START
        Accept number as iValue1 
		
		Display the pattern of even number upto corresponding iValue
	 
	 END



 */

 
 
#include "Header.h"

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);
    
	EvenPattern(iValue);
	
    return 0;       // returns to OS
}