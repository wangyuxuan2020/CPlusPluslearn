#include<bits/stdc++.h>
using namespace std;
bool pal(int n)
{
	int n1=0,t=n;
	while(n)
	{
		n1=n1*10+n%10; 
		n/=10;
	}
	if(t==n1)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	int n,m,a[110][110];
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin>>a[i][j];
		}
	}
		for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(pal(a[i][j]))
			{
				cout<<a[i][j]<<endl;
			}
		}
	}
	return 0;
}

