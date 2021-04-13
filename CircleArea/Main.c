/*
Problem statement : Accept radius of circle from user and calculate its area.
					Consider value of PI as 3.14. (Area = PI * Radius * Radius)
Input	: 5.3
Output	: 88.2026
Input	: 10.4
Output	: 339.6224
*/

/*
    Algorithm:
 
    START
        Accept radius as fRad
		create one variable fRet to store result
		
		use radius to calculate the Area of circle
		
		          
		display result
	 END

 */

 
 
#include "Header.h"

int main()
{
    float fRad = 0.0;
	float fRet = 0.0;
	

    printf("Enter the Radius of a circle: \n");
    scanf("%f",&fRad);
    
	fRet = CircleArea(fRad);
	if (fRet == -1)
	{
		printf("Radius should not be Zero.\n");
	}
	else
	{
	    printf("The Area of a circle is: %f\n",fRet);
	}


	return 0;       // returns to OS
}