#include<iostream>

using namespace std;

#include"example4-06-student.h"
const int N = 10;
void menu();
void OutputStu(const student *array);
void inputStu(student *array);
int SearchStu(const student *array, char *na);
bool InsertStu(student *array);
bool DeleteStu(student *array, char*na);

int main()
{

	student array[N];//����ѧ������

	int choice;//����ѡ��
	char na[20];
	do
	{
		menu();

		cout << "Please input your choice:";
		cin >> choice;
		if (choice >= 0 && choice <= 5)
			switch (choice)
			{
			case 1:inputStu(array); break;
			case 2:cout << "Input the name searched" << endl;
				
				cin >> na;
				int i;
				i = SearchStu(array, na);
				if (i == N)
					cout << "���޴��ˣ�\n";
				else
					array[i].Display();
				break;
			case 3:OutputStu(array); break;
			case 4:if (InsertStu(array))
				cout << "�ɹ�����һ����¼\n";
				   else
					cout << "����ʧ�ܣ�\n";
				break;
			case 5:
				cout << "input the name delete:" << endl;
				cin >> na;
				if (DeleteStu(array, na))
					cout << "�ɹ�ɾ��һ����¼\n";
				else
					cout << "ɾ��ʧ�ܣ�\n";
				break;
			default:break;
			}

	} while (choice);

	
	return 0;
}
void menu()
{
	cout << "********1.¼����Ϣ*********" << endl;
	cout << "*********2.��ѯ��Ϣ**********" << endl;
	cout << "**********3.�����Ϣ***********" << endl;
	cout << "************4.������Ϣ**********" << endl;
	cout << "*************5.ɾ����Ϣ***********"<<endl;
	cout << "*************0.�˳�***********" << endl;

}

void OutputStu(student *array)
{

	cout << "ѧ��������=" << student::Getcount() << endl; 
	for (int i = 0; i < N; i++)
		if(array[i].GetAge())
		array[i].Display();
}
int SearchStu(student *array, char *na)
{
	int i, j = N;
	for (i = 0; i < N; i++)
		if (array[i].GetAge())
			if (strcmp(array[i].GetName(), na) == 0)
			{
				j = i;
				break;
			}
	return j;

}

void inputStu(student *array)
{
	char ch;
	int i = 0;
	do
		
	{
		if (student::Getcount() == N)//�ж��Ƿ���λ�ò����¼
			cout << "�����������޷�����¼�룡" << endl;
		if(!array[i].GetAge())
		array[i++].input();
		cout << "���������𣿣�Y or N��" << endl;
		
		
		cin >> ch;

	} while (ch == 'Y');

}
bool InsertStu(student *array)
{
	if (student::Getcount() == N)
	{
		cout << "�����������޷������¼��"<<endl;
		return false;

	}
	int i;
	for ( i=0; array[i].GetAge(); i++);//�ҵ�һ������Ϊ0�Ŀ�λ��
	array[i].insert();
	return true;
}
bool DeleteStu(student *array, char *na)
{
	if (student::Getcount() == 0)
	{
		cout << "û�м�¼���޷�ɾ����"<< endl;
		return false;
	}
	int i = SearchStu(array, na);//���ò��Һ������жϴ����Ƿ����
	if (i == N)
	{
		cout << "���޴��ˣ��޷�ɾ����\n";
		return false;
	}
	array[i].Delete();//�������ֱ��ɾ��
	return true;
}
