#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,ma;
	cin>>a>>b>>c;
	ma=a;
	if(a>b)
	{
		swap(a,b);	
	}
	if(b>c)
	{
		swap(b,c);
	}
	if(c<a+b)
	{
		if(c*c==b*b+a*a)
		{
			cout<<"zhijiao";
		}
		else if(c*c<b*b+a*a)
		{
			cout<<"ruijiao";
		}
		else
		{
			cout<<"dunjiao";
		}
	}
	else
	{
		cout<<"no";
	}
	return 0;
}

