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

    BOOL bRet = 0;

	printf("Enter First Number: \n");
	scanf("%d",&iValue1);

	printf("Enter Second Number: \n");
	scanf("%d",&iValue2);

    bRet = ChkEqual(iValue1,iValue2);		

	if (bRet == TRUE)
	{
		printf("Numbers are equal\n");

	}
	else
	{
		printf("Numbers are not equal\n");

	}
	
    return 0;
}