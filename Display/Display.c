#include<stdio.h>

int Factorial(
					int iNo		//input
			 )
{
    int iCnt = 0;   	// 0 4	3	2 1	0
	int iFact = 1;
/*
	if (iNo == 0)
	{
		return -1;
	}

	else if (iNo < 0)
	{
		iNo = -iNo;
	}
	
*/	
	for(iCnt = iNo ; iCnt >0 ; iCnt-- )	
	{
		iFact = iFact * iCnt;   // 4 12 24 24
	
	}
	

	return iFact;
}


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);
    
	iRet = Factorial(iValue);
	if (iRet == -1)
	{
		printf("Factorial of 0 is : 1\n");
	}

	printf("Factorial of %d is : %d",iValue,iRet);
	
    return 0;       // returns to OS
}