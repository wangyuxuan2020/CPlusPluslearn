#include<bits/stdc++.h>
using namespace std;

int main()
{	
	double a,b,c,d,e;
	cout<<"请输入三角形的三个边的长度";
	cin>>a>>b>>c;
	if(a+b>c&&b+c>a&&c+a>b)
	{
	d=(a+b+c)/2;
//	海伦公式 
	e=sqrt(d*(d-a)*(d-b)*(d-c));
	cout<<e;
	}
	else
	{
		cout<<"这个不是三角形哦";
	}
	
	return 0;
}
