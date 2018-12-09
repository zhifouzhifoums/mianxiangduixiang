//example5-14-people
#include"example5-14-people.h"
//Date��ĺ���ʵ��
void Date::Set(int y, int m, int d)
{
	year = y;
	month = m;
	day = d;
}
int Date::GetYear()
{
	return year;
}
int Date::GetMonth()
{
	return month;
}
int Date::GetDay()
{
	return day;
}
//Person��ĺ���ʵ��
Person::Person()
{
	strcpy_s(name, "00");
}
char *Person::GetName()
{
	return name;
}
void Person::Input()
{
	cout << "��������Ϣ\n";
	cout << "������";
	cin >> name;
	cout << "��ţ�";
	cin >> number;
	int y, m, d;
	cout << "�������ڣ���� �·� ���ڣ���";
	cin >> y >> m >> d;
	birthday.Set(y, m, d);
	cout << "�Ա�m\r):";
	cin >> sex;
}
void Person::Output()
{
	cout << "������" << name << endl;
	cout << "��ţ�" << number << endl;
	cout << "�Ա�";
	if (sex == 'm')
		cout << "Ů" << endl;
	else
		cout<<"��"<<endl;
	cout << "�������ڣ�" << birthday.GetYear() << '-' << birthday.GetMonth() << '-' << birthday.GetDay() << endl;
}
//student��ĺ���ʵ��
void Student::Input()
{
	Person::Input();
	cout << "רҵ��";
	cin >> speciality;
}
void Student::Output()
{
	Person::Output();
	cout << "רҵ��" << speciality << endl;
}
//Graduate��ĺ���ʵ��
void Graduate::Input()
{
	Student::Input();
	cout << "�о����⣺";
	cin >> researchTopic;
}
void Graduate::Output()
{
	Student::Output();
	cout << "�о����⣺" << researchTopic << endl;
}
//Teacher��ĺ���ʵ��
void Teacher::Input()
{
	Person::Input();
	cout << "ְ�ƣ�";
	cin >> academicTitle;
}
void Teacher::Output()
{
	Person::Output();
	cout << "ְ�ƣ�" << academicTitle << endl;
}
//postgraduateOnjob��ĺ���ʵ��
void PostgraduateOnJob::Input()
{
	Graduate::Input();
	cout << "ְ�ƣ�";
	cin >> academicTitle;
}
void PostgraduateOnJob::Output()
{
	Graduate::Output();
	cout << "ְ�ƣ�" << academicTitle << endl;
}