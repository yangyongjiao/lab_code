#include<iostream>
using namespace std;//包含系统文件
#include "example4-04-Circle.h"//包含自定义头文件
int main()
{
	Circle c1(3.5), c2;//定义类的两个对象，c2的半径用默认值
	cout << "redius of c1=" << c1.GetRadius();//调用常成员函数输出半径
	cout << "area of c1=" << c1.Area() << " , circumference of c1=" << c1.Circumference() << endl;
	cout << "redius of c1=" << c2.GetRadius();
	cout << "area of c1=" << c2.Area() << " , circumference of c2=" << c2.Circumference() << endl;
	system("pause");
	system("pause");
	return 0;
}