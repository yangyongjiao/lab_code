#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class student
{
private:
	int num;
	char name[20];
	static int total;//˽�еľ�̬���ݳ�Ա
public:
	//static int total;
	student() { total++; }//���캯��ÿ����һ���µĶ�����total��1��
	~student() { total--; }//����������ÿһ�����������ڽ�������total��һ��
	student(int n, const char *p = "wang");
	void GetName();
	int Getnum();
	static void print();//����һ�����еľ�̬��Ա����
};
int student::total = 0;//��̬���ݳ�Ա�ĳ�ʼ��
student::student(int n,const char*p)//���ι��캯����ÿ����һ���¶�����total��һ
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
void student::print()//����ù��о�̬��Ա�������˴������ټ�static
{
	cout << "the number of all students: " << total << endl;

}
int main()
{
	student::print();//�޶���ʱ��������������̬��Ա������������ʽ���total
	student *p = new student();//��ָ�����뾲̬��̬�ռ�õ�����*P
	student::print();//������������̬��Ա�������������total
	p->print();//��ָ����ָ��Ķ���ȥ���ʾ�̬��Ա����������
	delete p;//ͨ��ָ��ɾ����̬��������һ��
	//udent::print();//������������̬��Ա�������������total
	p->print();
	student s[2];//�����������󣬹��캯����������
	s[0].print();
	s[1].print();
	system("pause");
	return 0;

}