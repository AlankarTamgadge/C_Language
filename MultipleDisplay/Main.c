/*
Problem statement : Accept N and print first 5 multiples of N.

 
 */

/*
    Algorithm:
 
    START
        Accept number as no
        
        iterate  no  5 times 
           
		display result
 
        

 END

 */

 
 
#include "Header.h"

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);
    
	MultipleDisplay(iValue);

	
    return 0;       // returns to OS
}