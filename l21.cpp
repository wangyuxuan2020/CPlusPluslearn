#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,d;
	
	cout<<"请输入一个数字";
	cin>>a;
	for(d=1;a>0;d++)
	{
		b=a%10;
		a=a/10;
		cout<<"第"<<d<<"位为："<<b <<endl;
	}
	
	
	
	
	
	return 0;
}
