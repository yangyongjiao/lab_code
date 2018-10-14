#include<iostream>
#include <windows.h>

using namespace std;
const double PL = 3.1415;
int  main()
{
	double PL;
	cout << "输入圆半径： ";
	cin >> r;
	cout << "周长: " << 2 * PL*r << endl;
	cout << "面积： " << PL * r*r << endl;
	return 0;
}



