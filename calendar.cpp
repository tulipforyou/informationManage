#include "calendar.h"

calendar::calendar()
{
	weekDay = 1;
}

void calendar::printMonthDays(int year)//打印日历
{
	int days;
	cout.flags(ios::left);
	for (int i = 1; i <= 12; i++)
	{
		printTitle(i);
		days = monthDays(year,i);
		for (int i = 1; i <= days; i++)
		{
			cout << setw(4) << i;
			weekDay = (weekDay + 1) % 7;
			if (weekDay == 0) cout << endl;
		}
		cout << endl;
	}
}

void calendar::printTitle(int m)
{
	cout << "\n" << m << "月" << endl << "日  一  二  三  四  五  六\n";
	//cout << " ";
	for (int i = 0; i < weekDay*2; i++)
		cout << "  ";
}

int calendar::monthDays(int year,int n)//判断每月天数
{
	switch(n)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			return 31;
		case 4:
		case 6:
		case 9:
		case 11:
			return 30;
		case 2:
			if (((year % 4 == 0 && year % 100 != 0) || year % 400 == 0))
				return 29;
			else
				return 28;
		default:
			return 0;
	}	
}

int calendar::firstDay(int year)
{
	int i1=365;
	int num=0;
	int days;
	for (int i = 1; i < year; i++)//不能等于，因为闰年当年不参与计算
		if (((i % 4 == 0 && i % 100 != 0) || i % 400 == 0))
			num++;
	days = i1 * (year - 1)+num;//闰年不参与计算
	weekDay = (days % 7)+1;
	return weekDay;
}
