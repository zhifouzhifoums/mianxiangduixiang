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
		cout << "����A" << endl;
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
		cout << "����B" << endl;
	}
	private:
		A a1,a2;           //�����Ա��B�������A��
		int y;
};
int main()
{
	B obj(10,20,30);
	system("pause");
	return 0;
	
}