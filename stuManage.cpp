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
	cout << "��������Ҫ��ѯѧ����ѧ�ź�����:" << endl;
	string name,code;
	cin >> name >> code;
	vector<student>::iterator stu=ver.begin();
	for (stu; stu != ver.end(); stu++) 
	{
		if ((*stu).name == name && (*stu).code == code)
		{
			cout << "��ѯ���Ϊ��" << endl;
			cout << (*stu).name << " " << (*stu).tel << " " << (*stu).addr 
				<< " " << (*stu).id << " " << (*stu).code << " " << (*stu).math << " "
				<< (*stu).chinese << " " << (*stu).english << endl;
		}
		else
			cout << "��ѯʧ�ܣ�" << endl;
	}
}

void control::edit(vector<student>& ver)
{
	string name, code;
	cout << "��������Ҫ�༭��ѧ��������ѧ��:" << endl;
	cin >> name >> code;
	vector<student>::iterator stu = ver.begin();
	for (stu; stu != ver.end(); stu++)
	{
		if ((*stu).name == name && (*stu).code == code)
		{
			cout << "������Ϊ��" << endl;
			cout << (*stu).name << " " << (*stu).tel << " " << (*stu).addr
				<< " " << (*stu).id << " " << (*stu).code << " " << (*stu).math << " "
				<< (*stu).chinese << " " << (*stu).english << endl;
			cout << "�����������ݣ�" << endl;
			cout << "������������" << endl;
			cin >> (*stu).name;
			cout << "������绰��" << endl;
			cin >> (*stu).tel;
			cout << "�������ַ��" << endl;
			cin >> (*stu).addr;
			cout << "���������֤�ţ�" << endl;
			cin >> (*stu).id;
			cout << "������ѧ�ţ�" << endl;
			cin >> (*stu).code;
			cout << "��������ѧ�ɼ���" << endl;
			cin >> (*stu).math;
			cout << "���������ĳɼ���" << endl;
			cin >> (*stu).chinese;
			cout << "������Ӣ��ɼ���" << endl;
			cin >> (*stu).english;

			(*stu).getsum();
			(*stu).getaver();

			cout << "�޸ĳɹ���" << endl;
			cout << "������Ϊ:" << endl;
			cout << (*stu).name << " " << (*stu).tel << " " << (*stu).addr
				<< " " << (*stu).id << " " << (*stu).code << " " << (*stu).math << " "
				<< (*stu).chinese << " " << (*stu).english << endl;
		}
		else
			cout << "�޸�ʧ��!" << endl;
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
	cout << "*                    ��ѡ����Ҫ�Ĳ���!                    *" << endl;
	cout << "*                    (1)������Ա                          *" << endl;
	cout << "*					  (2)ɾ����Ա                          *" << endl;
	cout << "*                    (3)�޸�����                          *" << endl;
	cout << "*                    (4)��ѯ                              *" << endl;
	cout << "*                    (5)�������ѧ������                  *" << endl;
	cout << "*                    (6)���ɼ�����                        *" << endl;
	cout << "*                    (0)�˳�                              *" << endl;
	cout << "***********************************************************" << endl;
	cout << endl;
}
