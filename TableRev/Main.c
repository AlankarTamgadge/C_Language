/*
Problem statement : accept number from user and display its table in reverse.

 
 */

/*
    Algorithm:
 
    START
        Accept number as no
        
        iterate  no  10 times in reverse order
           
		display result
 
        

 END

 */

 
 
#include "Header.h"

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);
    
	TableRev(iValue);

	
    return 0;       // returns to OS
}