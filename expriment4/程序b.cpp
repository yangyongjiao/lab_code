
	#include<iostream>

#include<windows.h>

using namespace std;

float checkagescore(int x,float y)   //����һ��floatcheckagescore����;

{
	if(x<16 || x>25)
		throw x;  //��x�ķ�Χ�����Ͼ��׳����Ĵ���;

	else if(y<0 || y>5) 
		throw y;  //��y�ķ�Χ���ʺϾ��׳�����;

     else
		 return y *20;  //����û�д���ͷ��ذٷ��Ƶĳɼ�;
}

int main()  //������;
{
	char name[20];

	 int age;

	 float score;
	 cout<<"������ͬѧ��������";

	cin>>name;

	cout<<"������ͬѧ�����䣺";

	cin>>age;
	cout<<"������ͬѧ�İٷ��Ƴɼ��� ";


cin>>score;
	cout <<endl;

	
try      //�������Ͱٷ��Ʒ�Χ�Ƿ�Ϻ���Χ

	 {
		 cout<<"��ѧ���İٷ��Ƴɼ�Ϊ�� "<<checkagescore( age, score)<<endl; //���ú�����ͨ����try��Ƕ��������ʵ�ֶ�Ҫ�����쳣�ĳ����
	 }
	 catch(int)  //����֮�������������û����������Ϣ
	{
		cout<<"���䷶Χ������"<<endl;
	}
  catch(float)
{
	cout<<"�ɼ���Χ������"<<endl;

}
  
	system("pause");

	return 0;

}







