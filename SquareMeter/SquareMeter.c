#include"Header.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name		:			SquareMeter
//  Input				:			integer
//  Output				:			double 
//  Description			:			It is used to convert square feet into square meter.
//  Date				:			7 August 2020
//  Author name			:			Alankar Tamgadge
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


double SquareMeter(
					int iFeet		//input argument
				)
{
	double dSqmtr = 0.0;

	if (iFeet == 0)
	{
		return -1;
	}
	else if (iFeet < 0 ) 
	{
		iFeet = -iFeet;
	}
		
	dSqmtr = (iFeet) * (0.092903);
	

	return dSqmtr;
}