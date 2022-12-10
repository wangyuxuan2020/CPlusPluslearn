#include<bits/stdc++.h>
using namespace std;
int main()
{
	double n,a[30];
	int ma=1.0,mi=1.0; 
	double h=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		h=h+a[i];
	}
	
	
	for(int i=1;i<=n;i++)
	{
		if(a[i]>a[ma])
		{
			ma=i;
		}
		if(a[i]<a[mi])
		{
			mi=i;
		}
	}
	h=h-a[ma]-a[mi];
	h=h/(n-2);
	cout<<fixed<<setprecision(2)<<h;

	return 0;
}
