/*
Problem statement : Accept amount in US dollar and return its corresponding value in Indian currency.
					Consider 1$ as 70 rupees.
Input : 3
Output : 270
Input : 1200
Output : 84000
*/

/*
    Algorithm:
 
    START
        Accept amount in iValue
		multiply it with 70
		create one variable iRet to store result
		          
		display result
	 END

 */

 
 
#include "Header.h"

int main()
{
    int iValue = 0;
	int iRet = 0;
	

    printf("Enter the amount in US Dollar: ");
	scanf("%d",&iValue);
	    
	iRet = DollarToINR(iValue);
	
	printf("The amount is %d rupees.\n",iRet);

	return 0;       // returns to OS
}