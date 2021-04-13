/*
Problem statement : Accept range from user and display all even numbers in between that range.

Input : 10 18
Output : 10 12 14 16 18
Input : 10 10
Output : 10
Input : -10 2
Output : -10 -8 -6 -4 -2 0 2
Input : 90 18
Output : Invalid range

*/

/*
    Algorithm:
 
    START
        Accept number 1 as iValue1         
		Accept number 2 as iValue2 

		create 1 variable as iCnt to count the range

		iterate iCnt untill iCnt is equal to end of range
			if divisible by 2
				display result
			otherwise continue
	 END

 */

 
 
#include "Header.h"

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
	

    printf("Enter first number : \n");
    scanf("%d",&iValue1);

    printf("Enter second number : \n");
    scanf("%d",&iValue2);
    
	RangeDisplayEven(iValue1,iValue2);

	return 0;       // returns to OS
}