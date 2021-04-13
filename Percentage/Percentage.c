#include"Header.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name		:			Percentage
//  Input				:			Interger,Integer
//  Output				:			Floating Point Integer
//  Description			:			It is used to calculate Percentage.
//  Date				:			2 August 2020
//  Author name			:			Alankar Tamgadge
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

double Percentage(
                    int iNo1,		// Input number1
					int iNo2		// Input number2	
			  )
{
	double dRet = 0.0;

    if(iNo2 == 0)				//Filter
    {
        return -1;
    }
	else if (iNo1 < 0)			//Updater
	{
		iNo1 = -iNo1;
	}
	else if (iNo2 < 0)			//Updater
	{
		iNo2 = -iNo2;
	}
	else if (iNo2 < iNo1)		//Filter
	{
		return -1;
	}

	else
	{
		dRet = ((double)iNo1 * 100) / (double)iNo2;   // Typecasting

		return dRet;
	}
	
 
}