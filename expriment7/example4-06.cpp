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

	student array[N];//定义学生数组

	int choice;//读入选项
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
					cout << "查无此人！\n";
				else
					array[i].Display();
				break;
			case 3:OutputStu(array); break;
			case 4:if (InsertStu(array))
				cout << "成功插入一条记录\n";
				   else
					cout << "插入失败！\n";
				break;
			case 5:
				cout << "input the name delete:" << endl;
				cin >> na;
				if (DeleteStu(array, na))
					cout << "成功删除一条记录\n";
				else
					cout << "删除失败！\n";
				break;
			default:break;
			}

	} while (choice);

	
	return 0;
}
void menu()
{
	cout << "********1.录入信息*********" << endl;
	cout << "*********2.查询信息**********" << endl;
	cout << "**********3.浏览信息***********" << endl;
	cout << "************4.插入信息**********" << endl;
	cout << "*************5.删除信息***********"<<endl;
	cout << "*************0.退出***********" << endl;

}

void OutputStu(student *array)
{

	cout << "学生总人数=" << student::Getcount() << endl; 
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
		if (student::Getcount() == N)//判断是否有位置插入记录
			cout << "人数已满，无法继续录入！" << endl;
		if(!array[i].GetAge())
		array[i++].input();
		cout << "继续输入吗？（Y or N）" << endl;
		
		
		cin >> ch;

	} while (ch == 'Y');

}
bool InsertStu(student *array)
{
	if (student::Getcount() == N)
	{
		cout << "人数已满，无法插入记录！"<<endl;
		return false;

	}
	int i;
	for ( i=0; array[i].GetAge(); i++);//找第一个年龄为0的空位置
	array[i].insert();
	return true;
}
bool DeleteStu(student *array, char *na)
{
	if (student::Getcount() == 0)
	{
		cout << "没有记录，无法删除！"<< endl;
		return false;
	}
	int i = SearchStu(array, na);//调用查找函数，判断此人是否存在
	if (i == N)
	{
		cout << "查无此人，无法删除！\n";
		return false;
	}
	array[i].Delete();//如果存在直接删除
	return true;
}
