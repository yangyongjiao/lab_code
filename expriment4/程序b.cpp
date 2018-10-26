
	#include<iostream>

#include<windows.h>

using namespace std;

float checkagescore(int x,float y)   //定义一个floatcheckagescore函数;

{
	if(x<16 || x>25)
		throw x;  //若x的范围不符合就抛出它的错误;

	else if(y<0 || y>5) 
		throw y;  //若y的范围不适合就抛出错误;

     else
		 return y *20;  //倘若没有错误就返回百分制的成绩;
}

int main()  //主函数;
{
	char name[20];

	 int age;

	 float score;
	 cout<<"请输入同学的姓名：";

	cin>>name;

	cout<<"请输入同学的年龄：";

	cin>>age;
	cout<<"请输入同学的百分制成绩： ";


cin>>score;
	cout <<endl;

	
try      //检测年龄和百分制范围是否合乎范围

	 {
		 cout<<"该学生的百分制成绩为： "<<checkagescore( age, score)<<endl; //调用函数，通过在try中嵌函数用来实现对要出现异常的程序段
	 }
	 catch(int)  //捕获之后做出处理，向用户输出错误信息
	{
		cout<<"年龄范围不合理"<<endl;
	}
  catch(float)
{
	cout<<"成绩范围不合理"<<endl;

}
  
	system("pause");

	return 0;

}







