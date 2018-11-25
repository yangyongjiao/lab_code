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
	static int count;//实际有效的学生个数，小于等于对象的个数

public:
	student();
	student(char *na, char *id, char *num, char *spec, int ag);//带参构造函数
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
	static int Getcount();//新增加的静态成员函数


};
#endif

