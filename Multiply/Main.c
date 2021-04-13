/*
    Problem statement : accept two numbers and check whether numbers are equal or not.
*/
 
/*
    Algorithm
 
    START
 
         first number as iValue
        
        Create one variable as iRet
 
        check if numbers are equal or not.
 
        if the numbers are equal 
            then return TRUE
        otherwise
            return FALSE
    stop
 */
 
 
 #include"Header.h"

int main()
{
    int iValue1 = 0;    
	int iValue2 = 0;
	int iValue3 = 0;


    int iRet = 0;

	printf("Enter First Number: \n");
	scanf("%d",&iValue1);

	printf("Enter Second Number: \n");
	scanf("%d",&iValue2);


	printf("Enter Third Number: \n");
	scanf("%d",&iValue3);

    iRet = Multiply(iValue1,iValue2,iValue3);		

	printf("Multiplication is : %d\n", iRet);
	

    return 0;
}