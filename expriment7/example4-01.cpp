#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class student
{
private:
	int num;
	char name[20];
	static int total;
public:
	//static int total;
	student() { total++; }
	~student() { total--; }
	student(int n, char *p = "wang");
	void GetName();
	int Getnum();
};
int student::total=0;
student::student(int n, char *p)
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
int main()
{
	cout << "the number of all students:" << student::total << endl;
	student *p = new student(13);
	cout << "the number of all students: " << student::total << endl;
	cout << "the number of all students:" << p->total << endl;
	delete p;
	cout << "the number of all students:" << student::total << endl;
	student s[2];
	cout << "the number of all students:" << s[0].total << endl;
	cout << "the number of all students:" << s[1].total << endl;
	system("pause");
	return 0;

}

	