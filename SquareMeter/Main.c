/*
Problem statement : Accept area in square feet and convert it into square meter.
					(1 square feet = 0.0929 Square meter)
Input : 5
Output : 0.464515
Input : 7
Output : 0.650321
*/

/*
    Algorithm:
 
    START
        Accept area in square feet in iValue
		convert it into square meter
		create one variable fRet to store result
		          
		display result
	 END

 */

 
 
#include "Header.h"

int main()
{
    int iValue = 0;
	double dRet = 0.0;
	

    printf("Enter the area in square feet : ");
	scanf("%d",&iValue);
	    
	dRet = SquareMeter(iValue);
	if (dRet == -1)
	{
		printf("Area should not be Zero.\n");
	}
	else
	{
	    printf("The area is %lf square meters\n",dRet);
	}


	return 0;       // returns to OS
}