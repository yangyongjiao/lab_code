#include<iostream>
#include<windows.h>
using namespace std;

 int sort(int *dat,int len)  //����һ������ĺ�����
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

int  output (int *dat,int len)  //���������ʵ�ֶ����������

{

	for(int i=0;i<len;i++)


		cout<< ' '<<dat[i];

	cout<<endl;

	return 0;
}

int main()
{
	int *p;

   p=new int[20];//��new����һ���ռ䣻

	 for(int i=0;i<20;i++)

		  cin>>p[i];

	 {                  //ʵ�ֶ������������͸����ĸ�����һ�����
		 int a=0,b=0;

		 for(i=0;i<20;i++)

		 if (p[i]<0)

			 a++;

		 else if(p[i]>0)

			 b++;
	 

		 cout<<"��������Ϊ�� "<<a<<endl;

		 cout<<"��������Ϊ�� "<<b<<endl;
	 }

		 float c=0;       //���ֵ��
		 
			 float sum=0;

		 for( i=0;i<20;i++)
		 {
			 sum+=p[i];

		 }
		 c=sum/20;

		 cout<<"��ֵΪ�� "<<c<<endl;

		 float s=0;    //�󷽲

		 float z=0;

		 for( i=0;i<20;i++)
		 {
			 z+=((p[i]-c)*(p[i]-c));
		 }
		 s=z/20;

		 cout<<"����Ϊ�� "<<s<<endl;
	

	 
		 
     sort(p,20);

	 output(p,20);
	 
	 delete[]p;

		 system("pause");

		 return 0;
	 }
	
	 
	 
