#include "example4-06-student.h"
int student::count = 0;//��̬���ݳ�Ա��ʼ��
student::student()
{
	name = NULL;

	age = 0;


}
student::student(char *na, char *id, char*num, char *spec, int ag)
{
	if (na)
	{
		name = new char[strlen(na) + 1];//����ǳ����

		strcpy(name, na);

	}
	strcpy(ID, id);

	strcpy(number, num);

	strcpy(speciality, spec);

	age = ag;
	count++;

}
student::student(const student &per)
{
	if (per.name)
	{
		name = new char[strlen(per.name) + 1];

		strcpy(name, per.name);

	}
	strcpy(ID, per.ID);

	strcpy(number, per.number);

	strcpy(speciality, per.speciality);

	age = per.age;
	count++;

}
student::~student()//��������

{
	cout << "disCon" << endl;
	if (name)

		delete[]name;
	count--;

}
char * student::GetName()const//��ȡ����

{
	return name;
}
char* student::GetID()//��ȡ���֤
{
	return ID; 
}
int student::GetAge() const//��ȡ����
{
	return age;
}
char* student::GetSpec()//��ȡרҵ
{
	return speciality;
}
char*student::GetNumber()//��ȡѧ��
{
	return number;
}

void student::Display()const //���������Ϣ
{
	cout << "������ " << name << endl;
	cout << "���֤�� " << ID << endl;
	cout << "ѧ�ţ� " << number << endl;
	cout << "רҵ�� " << speciality << endl;
	cout << "���䣺 " << age << endl << endl;
}
void student::input()
{

	char na[10];
	cout << "���������� ";
	cin >> na;
	if (name)
		delete[]name;
	name = new char[strlen(na) + 1];

	strcpy(name, na);
	cout << "�������֤�� ";
	cin >> ID;
	cout << "�������䣺 ";
	cin >> age;
	cout << "����רҵ�� ";
	cin >> speciality;
	cout << "����ѧ�ţ� ";
	cin >> number;
	count++;

}
void student::insert()//����
{
	if (!age)//�������age��ԱֵΪ0ʱ���ڴ˵���input()����������������ֵ
		input();
}
void student::Delete()//����
{
	age = 0;//ֻ�򵥵ؽ�age��0�����ƶ�����Ԫ��
	count--;
}
int student::Getcount()//������̬��Ա������ר���������ʾ�̬���ݳ�Ա
{
	return count;
}
