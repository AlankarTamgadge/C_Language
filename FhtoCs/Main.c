/*
Problem statement : Accept temperature in Fahrenheit and convert it into celsius.
					(1 celsius = (Fahrenheit -32) * (5/9))
Input : 10
Output : -12.2222 (10 - 32) * (5/9)
Input : 34
Output : 1.11111 (34 - 32) * (5/9)
*/

/*
    Algorithm:
 
    START
        Accept temperature in Fahrenheit  in fValue
		
		calculate the celsius using formula

		create one variable dRet to store calculated result
		          
		display result
	 END

 */

 
 
#include "Header.h"

int main()
{
    float fValue = 0.0;
	double dRet = 0.0;
	

    printf("Enter the temperature in Fahrenheit : ");
	scanf("%f",&fValue);
	    
	dRet = FhtoCs(fValue);
	
	printf("The temperature is %lf° celsius.\n",dRet);
	


	return 0;       // returns to OS
}