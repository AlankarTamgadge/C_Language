/*
    Problem statement : accept one number from user and check whether that
number is greater than 100 or not.
*/
 
/*
    Algorithm
 
    START
 
         first number as iValue
        
        Create one variable as iRet
 
        check if number is greater than 100 or not
 
        if the number  is greater than 100
            then return TRUE
        otherwise
            return FALSE
    stop
 */
 
 
 #include"Header.h"

int main()
{
    int iValue = 0;
    BOOL bRet = 0;

	printf("Enter the Number: \n");
	scanf("%d",&iValue);

    bRet = ChkGreater(iValue);		

	if (bRet == TRUE)
	{
		printf("%d is Greater than 100\n",iValue);

	}
	else
	{
		printf("%d is Not Greater than 100\n",iValue);

	}
	
    return 0;
}