#include "Header.h"
/*
	Problem statement : accept number from user and print numbers till that number.
 
	Input	: 8
	Output	: 1 2 3 4 5 6 7 8
 */
int main()
{
    int iValue = 0;			//local Variable
    int iRet = 0;

    printf("Enter a Number: \n");
    scanf("%d",&iValue);
    
	Display(iValue);
	
    return 0;       // returns to OS
}