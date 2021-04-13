#include "Header.h"
/*
	Problem statement : Accepts N from user and print all odd numbers up to N.
 
Input	: 18
Output	: 1 3 5 7 9 11 13

*/
int main()
{
    int iValue = 0;			//local Variable
    int iRet = 0;

    printf("Enter a Number: \n");
    scanf("%d",&iValue);
    
	OddDisplay(iValue);
	
    return 0;       // returns to OS
}