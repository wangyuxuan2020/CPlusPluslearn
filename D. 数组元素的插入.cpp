#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[20],x,y;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	cin>>x>>y;
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

