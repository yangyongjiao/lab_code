#include<iostream>
using namespace std;//����ϵͳ�ļ�
#include "example4-04-Circle.h"//�����Զ���ͷ�ļ�
int main()
{
	Circle c1(3.5), c2;//���������������c2�İ뾶��Ĭ��ֵ
	cout << "redius of c1=" << c1.GetRadius();//���ó���Ա��������뾶
	cout << "area of c1=" << c1.Area() << " , circumference of c1=" << c1.Circumference() << endl;
	cout << "redius of c1=" << c2.GetRadius();
	cout << "area of c1=" << c2.Area() << " , circumference of c2=" << c2.Circumference() << endl;
	system("pause");
	system("pause");
	return 0;
}