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
};
int Student::total=0;        //静态数据成员初始化
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
int main()
{
	cout << "The number of all student:" << Student::total << endl;
	Student *p = new Student(13);    //用指针申请动态空间并得到对象*p
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
