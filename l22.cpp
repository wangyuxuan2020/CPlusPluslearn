#include<bits/stdc++.h>
using namespace std;

int main()
{
	char a;
	int b,c,d;
	cout<<"������һ����";
	cin>>b;
	cout<<"������һ������";
	cin>>a;
	cout<<"������һ����";
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
			cout<<"�밴��ʾ����";
			break;
		}
	}
	
	
	
	
	
	return 0;
}
