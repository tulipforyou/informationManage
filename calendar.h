#pragma once
#ifndef _CALENDAR_H
#define _CALENDAR_H

#include"include.h"

class calendar
{
public:
	int weekDay;
	int year;
	calendar();
	void printMonthDays();
	void printTitle(int m);
	int monthDays(int n);
	int firstDay(int year);

};

#endif