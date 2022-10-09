#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,d,ma;
	cin>>a>>b>>c>>d;
	ma=a;
	if(b>ma)
	{
		ma=b;
	}
	if(c>ma)
	{
		ma=c;
	}
	if(d>ma)
	{
		ma=d;
	}
	cout<<ma;

	return 0;
}

