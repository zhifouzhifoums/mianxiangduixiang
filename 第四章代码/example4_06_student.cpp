//example4_06_student.cpp��ѧ�����ʵ��
#include "example4_06_student.h"
Student::Student()
{
	   name=NULL;
	   age=0;
}
//���캯��
Student::Student( char *na , char *id , char *num , char * spec ,int ag)
{	if(na)
	{ 
		name=new char[strlen(na)+1];       //����ǳ����
		strcpy_s(name,na);
	 }
    strcpy_s(ID, id);
	strcpy_s(number,num);
	strcpy_s(speciality, spec);
	age=ag;
	count++;
}
Student::Student(const Student &per)           //�������캯�����ڴ�������ʱû���õ�
{
	if(per.name)
	{
		name=new char[strlen(per.name)+1];
		strcpy_s(name,per.name);
	}
	strcpy_s(ID, per.ID);
	strcpy_s(number,per.number);
	strcpy_s(speciality, per.speciality);
	age=per.age;
	count++;
}
	
Student::~Student()                         //��������
{
	cout << "disCon" << endl;
	if (name)
		delete []name;
}
   
char* Student:: GetName() const                 //��ȡ����
{
	return name;
}
char* Student::GetID()                      //��ȡ���֤
{  
	return ID;
}
int Student::GetAge() const                       //��ȡ����
{  
	return age;
}
char* Student::GetSpec()                    //��ȡרҵ
{
	return speciality;
}
char* Student::GetNumber()                 //��ȡѧ��
{
	return number;
}
void Student::Display()  const                  //���������Ϣ
{
	cout<<"��  ����"<<name<<endl;
	cout<<"���֤��"<<ID<<endl;
	cout<<"ѧ  �ţ�"<<number<<endl;
	cout<<"ר  ҵ��"<<speciality<<endl;	
	cout<<"��  �䣺"<<age<<endl<<endl;
}
void Student::Input()                      //��������
{
	char na[10];
	cout<<"������  ����";
	cin>>na ;
	if(name)
		delete []name;            
	name=new char[ strlen(na)+1];
	strcpy_s( name, na );
	cout<<"�������֤��";
	   cin>>ID ;
	cout<<"������  �䣺";
	   cin>>age; 
	cout<<"����ר  ҵ��";
	   cin>>speciality ;
	cout<<"����ѧ  �ţ�";
	   cin>>number;	   
}
void Student::Insert()
{
	if (!age)
		Input();
}
void Student::Delete()
{
	age = 0;
	count--;
}
int Student::GetCount()
{
	return count;
}
