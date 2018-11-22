#include<iostream>
#include<windows.h>
using namespace std;
class A
{
public:
	A(int a)
	{
		x = a;
		cout << "A:X=" <<a<< endl;
	}
	~A()
	{
		cout << "析构A" << endl;
	}
private:
	int x;
};
class B
{
public:
	B(int a,int b,int c):a2(b),a1(a)
	{
		y= c;
		cout << "B:y=" <<c<< endl;
	}
	~B()
	{
		cout << "析构B" << endl;
	}
	private:
		A a1,a2;           //对象成员，B类包含了A类
		int y;
};
int main()
{
	B obj(10,20,30);
	system("pause");
	return 0;
	
}