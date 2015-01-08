//
//  homework.cpp
//  homework
//
//  Created by kehlin swain on 11/7/13.
//  Copyright (c) 2013 kehlin swain. All rights reserved.
//


#include "Extmoney.h"
#include <string>
Extmoney::Extmoney(int d, int c, string curr):Money(d, c)
{
	
	currency = curr;
}
Extmoney::Extmoney()
{
	currency = "USD";
}
string Extmoney::GetCurrency()
{
	return currency;
}
void Extmoney::Print()
{
	Money::Print();
	cout<< " "<< currency;
}
