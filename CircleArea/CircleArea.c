#include"Header.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name		:			CircleArea
//  Input				:			float
//  Output				:			float 
//  Description			:			It is used to calculate Area of Circle.
//  Date				:			7 August 2020
//  Author name			:			Alankar Tamgadge
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


float CircleArea(
					float fRadius		//input
	      		 )
{
	float fArea = 0.0;
	
	if (fRadius == 0)
	{
		return -1;
	}
	else
	{
		fArea = (22/7) * (fRadius)* (fRadius);
	}

	return fArea;
}