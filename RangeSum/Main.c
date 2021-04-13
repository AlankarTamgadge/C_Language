/*
Problem statement : Accept range from user and return addition of all numbers
					in between that range.(Range should contains positive numbers only)

Input : 23 30
Output : 212
Input : 10 18
Output : 126
Input : -10 2
Output : Invalid range
Input : 90 18
Output : Invalid range

*/

/*
    Algorithm:
 
    START
        Accept number 1 as iValue1         
		Accept number 2 as iValue2 

		create 1 variable as iCnt to count the range
		create 1 variable as iSum to store the sum

		iterate iCnt untill iCnt is equal to end of range
			store sum in iSum
			display result
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
    
	RangeSum(iValue1,iValue2);

	return 0;       // returns to OS
}