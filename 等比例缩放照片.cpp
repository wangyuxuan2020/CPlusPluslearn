#include<bits/stdc++.h>
using namespace std;
int main()
{
	double t,t1,d,mi=INT_MAX;
	int x,y,x1,y1,n;
	cin>>x>>y;
	cin>>n;
	t=x*1.0/y;
	while(n--)
	{
		cin>>x1>>y1;
		t1=x1*1.0/y1;
		d=abs(t-t1);
		if(d<mi||d==mi&&x1*y1<x*y)
		{
			mi=d;
			x=x1;
			y=y1;
		}
	}
	cout<<x<<' '<<y;
	return 0;
}

