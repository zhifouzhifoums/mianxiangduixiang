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
	static void Print();
};
int Student::total = 0;        //��̬���ݳ�Ա��ʼ��
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
void Student::Print()
{
	cout << "The number of all students:" << total << endl;
}
int main()
{
	Student::Print();
	Student *p = new Student(13);
	Student::Print();
	p->Print();
	delete p;
	p->GetName();
	Student s[2];
	s[0].Print();
	s[1].Print();
	system("pause");
	return 0;
}
