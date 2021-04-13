/*
Problem statement : Accept gross income from user and return the tax amount.



Input : 600000		Output : 10000 (0 + 10000)
Input : 450000		Output : 0
Input : 1200000		Output : 90000 (0 + 50000 + 40000)

*/

/*
    Algorithm:
 
    START
        Accept amount as iValue

		check which category income falls to

			if the income is 5 lakhs or less
				then no tax deduction

			if income is in between 5 to 10 lakhs
				then 10% tax deduction

			if income is in between 10 to 20 lakhs
				then there will be 20% tax deduction

			or if its greater than 20 lakhs
				then there will be 30% tax deduction

		Display the result.
	 
	 END



 */

#include"Header.h"
 


int main()
{
    int iValue = 0;					
	float fRet = 0;					

    printf("\nEnter Your Gross Income : ");
	scanf("%d",&iValue);					//Income amount input
       
	fRet = IncomeTax(iValue);
    printf("\nTax Amount : %f\n",fRet);		//Displays Tax Deduction amount
	
    return 0;       // returns to OS
}