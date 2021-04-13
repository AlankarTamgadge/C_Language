/*
Problem statement : Accept distance in kilometre and convert it into meter.
					(1kilometre = 1000 Meter)
Input : 5
Output : 5000
Input : 12
Output : 12000
*/

/*
    Algorithm:
 
    START
        Accept kilometre in iValue
		multiply it with 1000
		create one variable iRet to store result
		          
		display result
	 END

 */

 
 
#include "Header.h"

int main()
{
    float fValue = 0.0;
	int iRet = 0;
	

    printf("Enter the distance in kilometres : ");
	scanf("%f",&fValue);
	    
	iRet = KMtoMeter(fValue);
	if (iRet == -1)
	{
		printf("Parameter should not be Zero.\n");
	}
	else
	{
	    printf("The Distance is %d meters\n",iRet);
	}


	return 0;       // returns to OS
}