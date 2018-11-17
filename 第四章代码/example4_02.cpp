#include<iostream>
#include<windows.h>
using namespace std;
class Student
{
private:
	int num;
	char name[20];
	static int total;     //公有的静态数据成员
public:
	
	Student() { total++; }  //构造函数，每定义一个新对象，则total加1
	~Student() { total--; } //析构函数，每一个对象生命期结束，则total减1
	Student(int n, char *p = "Wang");
	void GetName();
	int GetNum();
	static void Print();
};
int Student::total = 0;        //静态数据成员初始化
Student::Student(int n, char *p)    //带参构造函数，每定义一个新对象，则total加1
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
