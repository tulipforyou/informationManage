#include"include.h"
#include "calendar.h"

int calendar_main()  //����ϵͳ��������
{
	int year;
	calendar cld;
	cout << "��������Ҫ��ѯ����ݣ�" << endl;
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