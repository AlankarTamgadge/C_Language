/*
    Problem statement : accept total marks & obtained marks from user and calculate percentage.
*/
 
/*
    Algorithm
 
    START
 
         accept obtained marks as iValue1
		 accept total marks as iValue2
        
        Create one variable as fRet to store result
 
        Calculate the Percentage

		return the result
    stop
 */
 
 
 #include"Header.h"

int main()
{
    int iValue1 = 0;			//Local Variable
	int iValue2 = 0;			//Local Variable


    double dRet = 1.0;				//Local Variable

	printf("Enter Your Marks: \n");
	scanf("%d",&iValue1);

	printf("Enter Total Marks: \n");
	scanf("%d",&iValue2);
	
	dRet = Percentage(iValue1,iValue2);		//Function Call	

	if (dRet == -1)
	{
		printf("Invalid Input\n");
	}
	else
	{
		printf("Percentage is : %lf\n", dRet);
	}

    return 0;
}