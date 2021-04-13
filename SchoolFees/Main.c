/*
Problem statement : Accept standard from user and display the corresponding fees.


Input : 2 Output : 12790
Input : 4 Output : 23450
Input : 6 Output : Wrong input

*/

/*
    Algorithm:
 
    START
        Accept Student's Standard as iValue

		check which category standard falls to

			if less than 500
				then no discount
			if its between 500 and 1500
				then 10% discount
			or if its greater than 1500
				 then 15% discount

		Display the result.
	 
	 END



 */

#include"Header.h"
 


int main()
{
    int iValue = 0;					//bill amount input
	int iRet = 0;					

    printf("\nEnter Class of Student : ");
	scanf("%d",&iValue);
       
	iRet = SchoolFees(iValue);
	
	if (iRet != -1)
	{
		printf("\nFee Amount : %d\n",iRet);
	}
	else
	{
		printf("\nWront Input.\n");
	}
	
    return 0;       // returns to OS
}