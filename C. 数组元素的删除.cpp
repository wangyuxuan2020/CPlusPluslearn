#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[20],x;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	cin>>x;
	for(int i=x;i<=n-1;i++)
	{
		a[i]=a[i+1];
	}
	n--;
	for(int i=1;i<=n;i++)
	{
		cout<<a[i]<<' ';
	}
	return 0;
}

