#include"Header.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name		:			TouristBill
//  Input				:			Integer
//  Output				:			Integer
//  Description			:			It is used to display the Calculated Rent of Vehicle.
//  Date				:			17 August 2020
//  Author name			:			Alankar Tamgadge
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int TouristBill(int iKilometer)
{
	int iBill = 0;

	if (iKilometer < 0)
	{
		iKilometer = -iKilometer;
	}
	if (iKilometer < 100)
	{
		iBill = iKilometer * 25;
		return iBill;
	}
	if (iKilometer >= 100)
	{
		iBill = ((iKilometer-100) * 15) + 2500 ;
		return iBill;
	}
}