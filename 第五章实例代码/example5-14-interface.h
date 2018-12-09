#ifndef _INTERFACE
#define _INTERFACE
#include"example5-14-people.h"
const int N = 3;
class Interface
{
protected:
	Student st[N];
	int numOfSt;
	Graduate gr[N];
	int numOfGr;
	PostgraduateOnJob po[N];
	int numOfPo;
	Teacher te[N];
	int numOfTe;
public:
	Interface();
	void display();
	void run();
	void Input();
	void Output();
};
#endif 

