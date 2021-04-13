/*
Problem statement : Accept Row and Column from user and display below pattern.

Input : iRow = 3 iCol = 4
Output : 
			1	 2	 3	 4
			5	 6	 7	 8
			9	 10	 11	 12
*/

/*
    Algorithm:
 
    START
        Accept row as iValue1 
        Accept column as iValue2 

		Display the pattern of numbers by printing row and columns
	 
	 END



 */

 
 
#include "Header.h"

int main()
{
    int iValue1 = 0;
	int iValue2 = 0;

    printf("Enter number of rows : ");
	scanf("%d",&iValue1);
    
    printf("Enter number of columns : ");
	scanf("%d",&iValue2);
    
	NumMatrix(iValue1,iValue2);
	
    return 0;       // returns to OS
}