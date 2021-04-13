#include"Header.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name		:			CalculateBill
//  Input				:			Intger
//  Output				:			Floating Point 
//  Description			:			It is used to display the Calculated Bill.
//  Date				:			17 August 2020
//  Author name			:			Alankar Tamgadge
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


float CalculateBill(int iAmount)
{
	float fBill = 0;

	if (iAmount < 0)
	{
		iAmount = -iAmount;
	}
	if (iAmount < 500)
	{
		fBill = iAmount;
		return fBill;
	}
	else if (iAmount >= 500 && iAmount <=1500)
	{
		fBill = iAmount - (iAmount * 0.10f) ;
		return fBill;
	}
	else
	{
		fBill = iAmount - (iAmount * 0.15f) ;
		return fBill;	
	}
}