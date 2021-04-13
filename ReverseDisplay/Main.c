/*
    Problem statement : accept number from user and display its digits in reverse order.
*/
 

 
 
#include "Header.h"

int main()
{
    int iValue = 0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);
    
	ReverseDisplay(iValue);
    
    return 0;       // returns to OS
}