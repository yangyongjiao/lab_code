#define _CRT_SECURE_NO_WARNINGS

#ifndef _STUDENT

#define _STUDENT


#include<iostream>
#include<string>

using namespace std;


#define SIZE 80

class student

{

	char *name;

	char ID[19];

	char number[10];

	char speciality[20];

	int age;
	static int count;//ʵ����Ч��ѧ��������С�ڵ��ڶ���ĸ���

public:
	student();
	student(char *na, char *id, char *num, char *spec, int ag);//���ι��캯��
	student(const student &per);

	~student();
	char* GetName()const;
	char* GetID();
	char* GetNumber();
	char* GetSpec();
	int  GetAge()const;
	void  Display()const;
	void  input();
	void insert();
	void Delete();
	static int Getcount();//�����ӵľ�̬��Ա����


};
#endif

