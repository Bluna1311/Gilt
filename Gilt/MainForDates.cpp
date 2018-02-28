//********************************************************
//
//	Michael J Phillips
//	Copyright 2015
//	All rights reserved.
//
//********************************************************
/*
#include <iostream>
#in/*clude <vector>

#include "date.h"
#include "calendar.h"

using namespace std;

int main()
{
	//
	//	Question 2(a)
	//
	Date dt = Date(12, 1, 2015);	//	Start date of swap
	do
	{
		dt.addMonths(3);
		Date paymentDate = dt;
		paymentDate.rollToGBD();
		cout << paymentDate << endl;	//	This uses operator<<
	}
	while( dt != Date(12, 1, 2025) );	//	Compare against end date of swap
	cout << "************************" << endl;

	//
	//	Question 2(b)
	//
	unsigned int count = 0;
	for (dt = Date(1, 1, 1950); dt != Date(1, 1, 2000); ++dt)
	{
		unsigned int d, m, y;
		dt.DMY(d, m, y);
		
		if (d == 1 && dt.weekday() == Date::SUNDAY)
			++count;
	}
	cout << "Number of Sundays that are 1st of month is " << count << endl;
	cout << "************************" << endl;

	//
	//	Question 2(c)
	//
	Calendar ldn;
	ldn.addHoliday(Date(1, 1, 2015));	//	New Year
	ldn.addHoliday(Date(3, 4, 2015));	//	Good Friday
	ldn.addHoliday(Date(6, 4, 2015));	//	Easter Monday
	ldn.addHoliday(Date(4, 5, 2015));	//	May Day Bank holiday (1st Monday in May)
	ldn.addHoliday(Date(25, 5, 2015));	//	Spring Bank Holiday (last Monday in May)
	ldn.addHoliday(Date(31, 8, 2015));	//	August Bank Holiday (last Monday in August)
	ldn.addHoliday(Date(25, 12, 2015));	//	Christmas Day
	ldn.addHoliday(Date(28, 12, 2015));	//	Boxing Day (rolled to following Monday)
	
	vector<unsigned int> gbdCount(12);	//	Initialised automatically to zero

	for (dt = Date(1, 1, 2015); dt != Date(1, 1, 2016); ++dt)
	{
		if (dt.isGBD(ldn))
		{
			unsigned int d, m, y;
			dt.DMY(d, m, y);
			++gbdCount[m-1];
		}
	}

	unsigned int maxDays = 0;
	for (unsigned int i = 0; i < 12; ++i)
	{
		if (gbdCount[i] > maxDays)
			maxDays = gbdCount[i];
	}

	for (unsigned int i = 0; i < 12; ++i)
	{
		if (gbdCount[i] == maxDays)
			cout << "Month number " << i+1 << " has " << maxDays << " business days" << endl;
	}
	cout << "************************" << endl;

	return 0;
}
*/