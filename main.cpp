#include"include.h"
#include "calendar.h"

int calendar_main()  //日历系统启动函数
{
	int year;
	calendar cld;
	cout << "请输入需要查询的年份：" << endl;
	cin >> year;
	cld.firstDay(year);
	cld.printMonthDays(year);
	return 0;
}
int main()
{
	calendar_main();
	return 0;
}