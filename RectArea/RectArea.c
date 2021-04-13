#include"Header.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name		:			RectArea
//  Input				:			float,float
//  Output				:			double 
//  Description			:			It is used to calculate Area of Rectangle.
//  Date				:			7 August 2020
//  Author name			:			Alankar Tamgadge
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


double RectArea(
					float fWidth,		//input argument
					float fHeight		//input argument
				)
{
	double dArea = 0.0;

	if (fWidth == 0 || fHeight == 0 )
	{
		return -1;
	}
	else if (fWidth == 0 && fHeight == 0)
	{
		return -1;
	}
	else if (fWidth < 0 || fHeight <= 0)
	{
		fWidth = -fWidth;
	}
	
	dArea = (fWidth) * (fHeight);
	

	return dArea;
}