#include<iostream>
#include<windows.h>
using namespace std;

 int sort(int *dat,int len)  //定义一个排序的函数；
{
	

for(int i=0;i<len;i++)
	{
		for(int j=0;j<len-i;j++)

			if(dat[i]>dat[i+j])
			{ 
				int tem;
				tem=dat[i];

				dat[i]=dat[i+j];

				dat[i+j]=tem;
			}
	}

  return 0;

}

int  output (int *dat,int len)  //用这个函数实现对它的输出；

{

	for(int i=0;i<len;i++)


		cout<< ' '<<dat[i];

	cout<<endl;

	return 0;
}

int main()
{
	int *p;

   p=new int[20];//用new申请一个空间；

	 for(int i=0;i<20;i++)

		  cin>>p[i];

	 {                  //实现对数组中正数和负数的个数的一个输出
		 int a=0,b=0;

		 for(i=0;i<20;i++)

		 if (p[i]<0)

			 a++;

		 else if(p[i]>0)

			 b++;
	 

		 cout<<"正数个数为： "<<a<<endl;

		 cout<<"负数个数为： "<<b<<endl;
	 }

		 float c=0;       //求均值；
		 
			 float sum=0;

		 for( i=0;i<20;i++)
		 {
			 sum+=p[i];

		 }
		 c=sum/20;

		 cout<<"均值为： "<<c<<endl;

		 float s=0;    //求方差；

		 float z=0;

		 for( i=0;i<20;i++)
		 {
			 z+=((p[i]-c)*(p[i]-c));
		 }
		 s=z/20;

		 cout<<"方差为： "<<s<<endl;
	

	 
		 
     sort(p,20);

	 output(p,20);
	 
	 delete[]p;

		 system("pause");

		 return 0;
	 }
	
	 
	 
