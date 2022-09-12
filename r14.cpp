//求两数的最大公约数 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	cout<<"请输入两个整数" ;
	cin>>a>>b;
	
	if(a<b)
	{
		swap(a,b);
	}
	if(a==0||b==0)
	{
		cout<<"最大公约数："<<a;
	}
	else
	{
		for(int c=b;c>0;c--)
		{
	//		将两数短除 
			if(a%c==0&&b%c==0)
			{
				cout<<"最大公约数是："<<c;
				break;
	//			停止 
			}
		}
	}
	
	
	return 0;
}
