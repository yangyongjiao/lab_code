#include "example4-06-student.h"
int student::count = 0;//静态数据成员初始化
student::student()
{
	name = NULL;

	age = 0;


}
student::student(char *na, char *id, char*num, char *spec, int ag)
{
	if (na)
	{
		name = new char[strlen(na) + 1];//避免浅拷贝

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
student::~student()//析构函数

{
	cout << "disCon" << endl;
	if (name)

		delete[]name;
	count--;

}
char * student::GetName()const//提取姓名

{
	return name;
}
char* student::GetID()//提取身份证
{
	return ID; 
}
int student::GetAge() const//提取年龄
{
	return age;
}
char* student::GetSpec()//提取专业
{
	return speciality;
}
char*student::GetNumber()//提取学号
{
	return number;
}

void student::Display()const //输出数据信息
{
	cout << "姓名： " << name << endl;
	cout << "身份证： " << ID << endl;
	cout << "学号： " << number << endl;
	cout << "专业： " << speciality << endl;
	cout << "年龄： " << age << endl << endl;
}
void student::input()
{

	char na[10];
	cout << "输入姓名： ";
	cin >> na;
	if (name)
		delete[]name;
	name = new char[strlen(na) + 1];

	strcpy(name, na);
	cout << "输入身份证： ";
	cin >> ID;
	cout << "输入年龄： ";
	cin >> age;
	cout << "输入专业： ";
	cin >> speciality;
	cout << "输入学号： ";
	cin >> number;
	count++;

}
void student::insert()//新增
{
	if (!age)//当对象的age成员值为0时，在此调用input()函数重新输入对象的值
		input();
}
void student::Delete()//新增
{
	age = 0;//只简单地将age置0而不移动数组元素
	count--;
}
int student::Getcount()//新增静态成员函数，专门用来访问静态数据成员
{
	return count;
}
