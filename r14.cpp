//�����������Լ�� 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	cout<<"��������������" ;
	cin>>a>>b;
	
	if(a<b)
	{
		swap(a,b);
	}
	if(a==0||b==0)
	{
		cout<<"���Լ����"<<a;
	}
	else
	{
		for(int c=b;c>0;c--)
		{
	//		�������̳� 
			if(a%c==0&&b%c==0)
			{
				cout<<"���Լ���ǣ�"<<c;
				break;
	//			ֹͣ 
			}
		}
	}
	
	
	return 0;
}
