#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[110];
	int n;
	cin>>n;
	int t; 
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		
	}
	for(int i=1;i<=n/2;i++)
	{
		t=a[i];
		a[i]=a[n-i+1];
		a[n-i+1]=t;
	}
	for(int i=1;i<=n;i++)
	{
		cout<<a[i]<<' ';
	}

	return 0;
}

