#ifndef  _Circle
#define _Circle
class Circle
{
private:
	double Radius;//定义圆的半径
	const double PI;//定义一个常数据成员PI代表圆周率
public:
	Circle(double r = 0)
	{
		PI = 3.1415926;
		Radius = r;
	}
	double Area();//求圆的面积
	double Circumference();//求圆的周长

};
#endif

