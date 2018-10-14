#include<iostream>
#include<windows.h>
using namespace std;
int  & s(coust int &a, int &b)
{
	b += a;
	return b;

}
int main()
int x = 500, y = 1000, z = 0;;
cout << x << '\t' << y << '\t' << z << '\n';
s(x, y);
cout << x << '\t' << y << '\t' << z << '\n';
z(x, y);
cout << x << '\t' << y << '\t' << z << '\n';
s(x, y);
cout << x << '\t' << y << '\t' << z << '\n';
systeram("pause");
return 0;

