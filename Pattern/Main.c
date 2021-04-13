/*
Problem statement : accept number from user and display its table.

Input	: 5
Output	: $ * $ * $ * $ * $ *
Input	: 3
Output	: $ * $ * $ *
Input	: -3
Output	: $ * $ * $ *
*/

/*
    Algorithm:
 
    START
        Accept number as no
        
        iterate $ & *  no  times
           
		display result
	 END

 */

 
 
#include "Header.h"

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);
    
	Pattern(iValue);
	
    return 0;       // returns to OS
}