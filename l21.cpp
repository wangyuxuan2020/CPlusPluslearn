#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,d;
	
	cout<<"������һ������";
	cin>>a;
	for(d=1;a>0;d++)
	{
		b=a%10;
		a=a/10;
		cout<<"��"<<d<<"λΪ��"<<b <<endl;
	}
	
	
	
	
	
	return 0;
}
