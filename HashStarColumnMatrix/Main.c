/*
Problem statement : Accept Row and Column from user and display below pattern.

Input : iRow = 3 iCol = 4
Output :	* # * #
			* # * #
			* # * #


*/

/*
    Algorithm:
 
    START
        Accept row as iValue1 
        Accept column as iValue2 

		Display the pattern by printing row and columns
	 
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
    
	HashStarColumnMatrix(iValue1,iValue2);
	
    return 0;       // returns to OS
}