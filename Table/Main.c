/*
Problem statement : accept number from user and display its table.

 
 */

/*
    Algorithm:
 
    START
        Accept number as no
        
        iterate  no  10 times
           
		return result
 
        

 END

 */

 
 
#include "Header.h"

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);
    
	Table(iValue);

	
    return 0;       // returns to OS
}