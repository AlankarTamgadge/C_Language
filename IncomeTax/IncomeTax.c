#include"Header.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name		:			IncomeTax
//  Input				:			Intger
//  Output				:			Floating Point 
//  Description			:			It is used to displays the Income Tax Deduction amount.
//  Date				:			17 August 2020
//  Author name			:			Alankar Tamgadge
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


float IncomeTax(
					int iAmount			//Input
				)
{
	float fTax = 0;

	if (iAmount < 0)
	{
		iAmount = -iAmount;
	}
	if (iAmount <= 500000)
	{
		fTax = 0;
		return fTax;
	}
	else if (iAmount > 500000 && iAmount < 1000000)
	{
		fTax = (iAmount - 500000) * 0.10 ;
		return fTax;
	}
	else if (iAmount >= 1000000 && iAmount <= 2000000)
	{
		fTax = ((iAmount-(iAmount - 1000000) - 500000) * 0.10)+ ((iAmount - 1000000) * 0.20) ;
		return fTax;	
	}
	else
	{
		fTax = (iAmount - 2000000) * 0.30 + 150000;
		return fTax;	
	}
}