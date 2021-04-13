/*
Problem statement : Accept Row and Column from user and display below pattern.

Input : iRow = 4 iCol = 3
Output : 

1 1 1 
2 2 2 
3 3 3 
4 4 4 


*/

/*
    Algorithm:
 
    START
        Accept row as iValue1 
        Accept column as iValue2 

		Display the pattern of number of columns by printing row and columns
	 
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
    
	NumberCoulmnMatrix(iValue1,iValue2);
	
    return 0;       // returns to OS
}