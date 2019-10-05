#pragma once
#ifndef _CALENDAR_H
#define _CALENDAR_H

#include"include.h"

class calendar
{
public:
	int weekDay;
	calendar();
	void printMonthDays(int year);
	void printTitle(int m);
	int monthDays(int year,int n);
	int firstDay(int year);

};

#endif