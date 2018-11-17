#include<iostream>
#include<windows.h>
using namespace std;
class Student
{
private:
	int num;
	char name[20];
	static int total;     //���еľ�̬���ݳ�Ա
public:
	Student() { total++; }  //���캯����ÿ����һ���¶�����total��1
	~Student() { total--; } //����������ÿһ�����������ڽ�������total��1
	Student(int n, char *p = "Wang");
	void GetName();
	int GetNum();
};
int Student::total=0;        //��̬���ݳ�Ա��ʼ��
Student::Student(int n, char *p)    //���ι��캯����ÿ����һ���¶�����total��1
{
	num = n;
	strcpy_s(name, p);
	total++;
}
void Student::GetName()
{
	cout << name << endl;
}
int Student::GetNum()
{
	return num;
}
int main()
{
	cout << "The number of all student:" << Student::total << endl;
	Student *p = new Student(13);    //��ָ�����붯̬�ռ䲢�õ�����*p
	cout << "The number of all student:" << Student::total << endl;
	cout << "The number of all student:" << p->total << endl;
	delete p;
	cout << "The number of all student:" << Student::total << endl;
	Student s[2];
	cout << "The number of all student:" << s[0].total << endl;
	cout << "The number of all student:" << s[1].total << endl;
	system("pause");
	return 0;
}
