//example4_06.cpp�ļ�������������������һЩ��ͨ����
#include<iostream>
#include "example4_06_student.h"
using namespace std;
const int N=10;

void menu();
void OutputStu( const Student *array );
void InputStu(Student *array);
int SearchStu( const Student *array, char *na);
bool InsertStu(Student *array);
bool DeleteStu(Student *array, char *na);

int count=0;

int main()
{
	Student array[N];
	int choice;
	char na[20];
	
	do
	{
		menu();
		cout<<"Please input your choice:";
		cin>>choice;
		if( choice>=0 && choice <= 3 )         
			switch(choice)
		{
			case 1:InputStu(array);break;
			case 2:cout<<"Input the name searched"<<endl;
			       char na[20];
				   cin>>na;
				   int i;
					   i=SearchStu(array, na);
				   if (i==N)
					   cout<<"���޴��ˣ�\n";
				   else
					   array[i].Display();
				   break;
			case 3:OutputStu(array); break;
			case 4:if (InsertStu(array))
				cout << "�ɹ�����һ����¼\n";
				   else
				cout << "����ʧ�ܣ�\n"; break;
			case 5:
				cout << "Input the name deleted:" << endl;
				cin >> na;
				if (DeleteStu(array, na))
					cout << "�ɹ�ɾ��һ����¼\n";
				else
					cout << "ɾ��ʧ�ܣ�\n";
				break;
			default:break;
		}
	}while(choice);
	return 0;
}
				   

void menu()
{
	cout<<"**********1.¼����Ϣ**********"<<endl;
	cout<<"**********2.��ѯ��Ϣ**********"<<endl;
	cout<<"**********3.�����Ϣ**********"<<endl;
	cout << "***********4.������Ϣ***********" << endl;
	cout << "***********5.ɾ����Ϣ***********" << endl;
	cout<<"**********0.��    ��**********"<<endl;
}

void OutputStu( const Student *array)               //�����������Ԫ��
{
	cout<<"ѧ��������="<<Student::GetCount()<<endl;
	for(int i=0 ; i<N ; i++)
		if(array[i].GetAge ())
		array[i].Display();
}

int SearchStu(const Student *array, char *na )         //��������ѯ
{
	int i,j=N;
	for(i=0 ; i<N ; i++)
		if(array[i].GetAge())
		if( strcmp( array[i].GetName() , na) == 0 )
			j=i;
	return j;
}

void InputStu(Student *array )                //�����������Ԫ��
{
	char ch;
	int i = 0;
	do
	{
		if (Student::GetCount() == N)
			cout << "�����������޷�����¼�룡" << endl;
		if(!array[i].GetAge())
		array[i++].Input();
		cout<<"����������(Y or N )"<<endl;
		cin>>ch;
	}while(ch=='Y');
}
bool InsertStu(Student *array)
{
	int i=0;
	if (Student::GetCount() == N)
	{
		cout << "��������,�޷������¼" << endl;
		return false;
	}
	for (int i = 0; array[i].GetAge(); i++);

	array[i].Insert();
	return 1;
}
bool DeleteStu(Student *array, char *na)
{
	if (Student::GetCount == 0)
	{
		cout << "û�м�¼���޷�ɾ����" << endl;
		return false;

	}
	int i = SearchStu(array, na);
	if(i==N)
	{
		cout << "���޴��ˣ��޷�ɾ����\n";
		return false;
	}
	array[i].Delete();
	return 1;
}
