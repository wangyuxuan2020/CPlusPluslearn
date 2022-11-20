#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[1010],x,y;
	cin>>y;
	cin>>n;
	x=n+1;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		if(y<a[i])
		{
			x=i;
			break; 
		}
	}
	for(int i=n;i>=x;i--)
	{
		a[i+1]=a[i];
	}
	a[x]=y;
	n++;
	for(int i=1;i<=n;i++)
	{
		cout<<a[i]<<' ';
	}
	return 0;
}

