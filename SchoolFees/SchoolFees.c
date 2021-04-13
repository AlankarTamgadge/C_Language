#include"Header.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name		:			SchoolFees
//  Input				:			Integer
//  Output				:			Integer
//  Description			:			It is used to display the Class Fees.
//  Date				:			17 August 2020
//  Author name			:			Alankar Tamgadge
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int SchoolFees(int iStandard)
{
	switch (iStandard)
	{
	case 1:
		return 8900;
		break;
	case 2:
		return 12790;
		break;
	case 3:
		return 21000;
		break;
	case 4:
		return 23450;
		break;
	default:
		return -1;
	
	}
}