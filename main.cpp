#include"include.h"
#include "calendar.h"
int main()
{
	int year;
	calendar cld;
	cin >> year;
	cld.firstDay(year);
	cld.printMonthDays(year);
	return 0;
}