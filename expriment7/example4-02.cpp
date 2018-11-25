#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class student
{
private:
	int num;
	char name[20];
	static int total;//私有的静态数据成员
public:
	//static int total;
	student() { total++; }//构造函数每定义一个新的对象。则total加1；
	~student() { total--; }//析构函数，每一个对象生命期结束，则total加一；
	student(int n, const char *p = "wang");
	void GetName();
	int Getnum();
	static void print();//声明一个公有的静态成员函数
};
int student::total = 0;//静态数据成员的初始化
student::student(int n,const char*p)//带参构造函数，每定义一个新对象，则total加一
{
	num = n;
	strcpy(name, p);
	total++;


}
void student::GetName()
{
	cout << name << endl;

}
int student::Getnum()
{
	return num;
}
void student::print()//定义该公有静态成员函数，此处不能再加static
{
	cout << "the number of all students: " << total << endl;

}
int main()
{
	student::print();//无对象时可用类名：：静态成员函数名（）形式输出total
	student *p = new student();//用指针申请静态动态空间得到对象*P
	student::print();//用类名：：静态成员函数名（）输出total
	p->print();//用指针所指向的对象去访问静态成员函数名（）
	delete p;//通过指针删除动态对象，析构一次
	//udent::print();//用类名：：静态成员函数名（）输出total
	p->print();
	student s[2];//定义两个对象，构造函数调用两次
	s[0].print();
	s[1].print();
	system("pause");
	return 0;

}