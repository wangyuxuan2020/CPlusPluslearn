//求最小公倍数 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	cout<<"请输入两个整数大于0"<<endl;
	cin>>a>>b;
	if(a<b)
	{
		swap(a,b);
	}
	else
	{
		for(int c=a;c<=a*b;c=c*2)
		{
			if(c%b==0)
			{
				cout<<"最小公倍数是："<<c;
				break;
			}
		}
	}
	
	
	return 0;
}
