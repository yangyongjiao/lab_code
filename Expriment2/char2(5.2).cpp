#include<iostream>
#include<windows.h>
using namespace std;
int sum(int x, int y);
{
	int sum;
	cin >> x >> y;
	sum = x + y;
	return (sum);
}
int main()
{
	int a, b, z;
	z = sum(a, b);
	cout << "����֮��Ϊ��" << z << endl;
	system("pause");
	return 0;
}
