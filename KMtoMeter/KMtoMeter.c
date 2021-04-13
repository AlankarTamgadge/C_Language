#include"Header.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name		:			KMtoMeter
//  Input				:			float
//  Output				:			int 
//  Description			:			It is used to Kilometres into meters.
//  Date				:			7 August 2020
//  Author name			:			Alankar Tamgadge
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int KMtoMeter(
					float fKms		//input argument
				)
{
	int iMtr = 0.0;

	if (fKms < 0 )
	{
		fKms = -fKms;
	}
	else if (fKms == 0)
	{
		return -1;
	}
		
	iMtr = (fKms) * (1000);
	

	return iMtr;
}