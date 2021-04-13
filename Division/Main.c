/*
    Problem statement : divide two numbers
*/
 
/*
    Algorithm
 
    START
 
         first number as iValue1
         second number as iValue2
        
        Create one variable as iRet
 
        Perform division of iValue1 & iValue2
        Store the result in iRet
 
        return the value from iRet
 
    stop
 */#include"Header.h"

int main()
{
    int iValue1 = 15, iValue2 = 5;
    int iRet = 0;

    iRet = Division(iValue1, iValue2);
    printf("Division is %d",iRet);

    return 0;
}