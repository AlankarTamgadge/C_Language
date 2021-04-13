/*
Problem statement : Accept width & height of rectangle from user and calculate its area.
					(Area = Width * Height)
Input : 5.3 9.78
Output : 51.834
*/

/*
    Algorithm:
 
    START
        Accept Width & Height
		create one variable dRet to store result
		
		use Width * Height to calculate the Area of Rectangle
		
		          
		display result
	 END

 */

 
 
#include "Header.h"

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
	double dRet = 0.0;
	

    printf("Enter width \t: ");
	scanf("%f",&fValue1);
	printf("Enter height \t: ");
	scanf("%f",&fValue2);
    
	dRet = RectArea(fValue1,fValue2);
	if (dRet == -1)
	{
		printf("Parameters should not be Zero.\n");
	}
	else
	{
	    printf("The Area of a Rectangle is: %f\n",dRet);
	}


	return 0;       // returns to OS
}