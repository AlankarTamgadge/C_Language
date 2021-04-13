/*
Problem statement : Accept total bill amount and depends on the discount policy
					return the amount after applying discount.



Input : 1200	Output : 1080
Input : 290		Output : 290
Input : 3700	Output : 3145

*/

/*
    Algorithm:
 
    START
        Accept bill amount as iValue

		check which category bill falls to

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
	float fRet = 0;					

    printf("Enter Bill Amounr : ");
	scanf("%d",&iValue);
       
	fRet = CalculateBill(iValue);
    printf("\nBill Amount : %f",fRet);
	
    return 0;       // returns to OS
}