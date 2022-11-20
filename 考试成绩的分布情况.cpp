#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,n[100],y=0,x=0;
	double s=0; 
	cin>>a;
	for(int i=0;i<a;i++)
	{
		cin>>n[i];
		s=s+n[i];
	}
	s=s/a;
	cout<<fixed<<setprecision(1)<<s*1.0<<' ';
	for(int i=0;i<a;i++)
	{
		if(n[i]>=s)
		{
			y=y+1;
		}
		else
		{
			x=x+1;	
		}
	}
	cout<<y<<' '<<x;

	return 0;
}

