/*
Problem statement : Accept number of kilometres from user and return the estimated rent.


Input : 73	Output : 1825
Input : 132 Output : 2980
Input : 189 Output : 3835

*/

/*
    Algorithm:
 
    START
        Accept bill amount as iValue

		check which category bill falls to

			if less than 100 kilometres
				then charge 25 rupees per kilometre
			if more than 100 kilometres 
				then apply 15 rupees per kilometre after 100 kilometres

		Display the result.
	 
	 END



 */

#include"Header.h"
 


int main()
{
    int iValue = 0;					
	int iRet = 0;					

    printf("\nEnter Kiloneters : ");
	scanf("%d",&iValue);
       
	iRet = TouristBill(iValue);
    printf("\nBill Amount : %d\n",iRet);
	
    return 0;       // returns to OS
}