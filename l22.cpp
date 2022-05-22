#include<bits/stdc++.h>
using namespace std;

int main()
{
	char a;
	int b,c,d;
	cout<<"请输入一个数";
	cin>>b;
	cout<<"请输入一个符号";
	cin>>a;
	cout<<"请输入一个数";
	cin>>c;
	switch(a)
	{
		case '+':
		{
			d=b+c;
			cout<<d;
			break;
		}
		
		case '-':
		{
			d=b-c;
			cout<<d;
			break;
		}
		case '/':
		{
			d=b/c;
			cout<<d;
			break;
		}
		
		case '*':
		{
			d=b*c;
			cout<<d;
			break;
		}
		default:
		{
			cout<<"请按提示输入";
			break;
		}
	}
	
	
	
	
	
	return 0;
}
