/*
Problem statement : Accept number from user and display below pattern.

Input : 5
Output : A B C D E

*/

/*
    Algorithm:
 
    START
        Accept number as iValue1 
		convert numbers in respective alphabets
		Display the pattern upto corresponding iValue
	 
	 END



 */

 
 
#include "Header.h"

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);
    
	AlphaPattern(iValue);
	
    return 0;       // returns to OS
}