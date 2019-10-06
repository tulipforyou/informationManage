#include "stuManage.h"

stuManage::stuManage()
{
}

stuManage::stuManage(string name, string tel, string addr, string id)
{
	this->name = name;
	this->tel = tel;
	this->addr = addr;
	this->id = id;
}

student::student()
{
}

student::student(string name, string tel, string addr, string id, string code, double math, double chinese, double english)
{
	this->name = name;
	this->tel = tel;
	this->addr = addr;
	this->id = id;
	this->code = code;
	this->math = math;
	this->chinese = chinese;
	this->english = english;
}

double student::getsum()
{return chinese+math+english;}

double student::getaver()
{return (chinese + math + english)/3;}

control::control()
{
}

void control::find(vector<student>& ver)
{
	cout << "请输入需要查询学生的学号和姓名:" << endl;
	string name,code;
	cin >> name >> code;
	vector<student>::iterator stu=ver.begin();
	for (stu; stu != ver.end(); stu++) 
	{
		if ((*stu).name == name && (*stu).code == code)
		{
			cout << "查询结果为：" << endl;
			cout << (*stu).name << " " << (*stu).tel << " " << (*stu).addr 
				<< " " << (*stu).id << " " << (*stu).code << " " << (*stu).math << " "
				<< (*stu).chinese << " " << (*stu).english << endl;
		}
		else
			cout << "查询失败！" << endl;
	}
}

void control::edit(vector<student>& ver)
{
	string name, code;
	cout << "请输入需要编辑的学生姓名和学号:" << endl;
	cin >> name >> code;
	vector<student>::iterator stu = ver.begin();
	for (stu; stu != ver.end(); stu++)
	{
		if ((*stu).name == name && (*stu).code == code)
		{
			cout << "旧数据为：" << endl;
			cout << (*stu).name << " " << (*stu).tel << " " << (*stu).addr
				<< " " << (*stu).id << " " << (*stu).code << " " << (*stu).math << " "
				<< (*stu).chinese << " " << (*stu).english << endl;
			cout << "请输入新数据：" << endl;
			cout << "请输入姓名：" << endl;
			cin >> (*stu).name;
			cout << "请输入电话：" << endl;
			cin >> (*stu).tel;
			cout << "请输入地址：" << endl;
			cin >> (*stu).addr;
			cout << "请输入身份证号：" << endl;
			cin >> (*stu).id;
			cout << "请输入学号：" << endl;
			cin >> (*stu).code;
			cout << "请输入数学成绩：" << endl;
			cin >> (*stu).math;
			cout << "请输入语文成绩：" << endl;
			cin >> (*stu).chinese;
			cout << "请输入英语成绩：" << endl;
			cin >> (*stu).english;

			(*stu).getsum();
			(*stu).getaver();

			cout << "修改成功！" << endl;
			cout << "新数据为:" << endl;
			cout << (*stu).name << " " << (*stu).tel << " " << (*stu).addr
				<< " " << (*stu).id << " " << (*stu).code << " " << (*stu).math << " "
				<< (*stu).chinese << " " << (*stu).english << endl;
		}
		else
			cout << "修改失败!" << endl;
	}
}

void control::del(vector<student>& ver)
{
}

void control::insert(vector<student>& ver)
{
}

void control::st(vector<student>& ver)
{
}

void control::list(vector<student>& ver)
{
}

void control::gui()
{
	cout << endl << endl;
	cout << "***********************************************************" << endl;
	cout << "*                    请选择需要的操作!                    *" << endl;
	cout << "*                    (1)增加人员                          *" << endl;
	cout << "*					  (2)删除人员                          *" << endl;
	cout << "*                    (3)修改数据                          *" << endl;
	cout << "*                    (4)查询                              *" << endl;
	cout << "*                    (5)输出所有学生数据                  *" << endl;
	cout << "*                    (6)按成绩排序                        *" << endl;
	cout << "*                    (0)退出                              *" << endl;
	cout << "***********************************************************" << endl;
	cout << endl;
}
