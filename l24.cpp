#include<bits/stdc++.h>
using namespace std;

int main()
{	
	double a,b,c,d,e;
	cout<<"�����������ε������ߵĳ���";
	cin>>a>>b>>c;
	if(a+b>c&&b+c>a&&c+a>b)
	{
	d=(a+b+c)/2;
//	���׹�ʽ 
	e=sqrt(d*(d-a)*(d-b)*(d-c));
	cout<<e;
	}
	else
	{
		cout<<"�������������Ŷ";
	}
	
	return 0;
}
