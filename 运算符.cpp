#include<bits/stdc++.h>
using namespace std;
int main()
{
	bool a=true,b=false,c=true,d=false;
	bool i;
	//�����ͬΪ�棨1����ͬΪ�٣�0��
	i=a^b;
	cout<<"�����ͬΪ��"<<i<<endl;
	i=a^c;
	cout<<"��ͬΪ��"<<i<<endl;
	//���������棨1��ͬ����٣�0��
	i=a|b;
	cout<<"����������"<<i<<endl;
	i=b|d;
	cout<<"ͬ�����"<<i<<endl;
	// �ǣ�ȡ��
	i=!b;
	cout<<" �ǣ�ȡ��"<<i<<endl;
	//�룺�м���٣�0��ͬ�����棨1��
	i=a&b;
	cout<<"�룺�м����"<<i<<endl;
	i=a&c; 
	cout<<"ͬ������"<<i<<endl;
	 


	return 0;
}

