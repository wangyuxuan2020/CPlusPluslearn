#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b;
	cin>>a;
	if(a>0)
	{
		while(a%10==0)
		{
			a=a/10;
		}
	}
	while(a>10)
	{
		b=a%10;
		cout<<b;
		a=a/10;
	}	
	
	cout<<a;
	return 0;
}


	
