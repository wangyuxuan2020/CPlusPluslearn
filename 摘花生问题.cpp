#include<bits/stdc++.h>
using namespace std;
int a[110][110];
int n,m; 
int q[110];
int x,y;

int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin>>a[i][j];
			a[i][j]+=max(a[i-1][j],a[i][j-1]);
		}
	}
	x=n,y=m;
	for(int i=1;i<=n+m-1;i++)
	{
		if(a[x-1][y]>a[x][y-1])
		{
			q[i]=a[x][y]-a[x-1][y];
			x--;
		}else
		{
			q[i]=a[x][y]-a[x][y-1];
			y--;
		}
	}
	for(int i=n+m-1;i>=1;i--)
	{
		cout<<q[i];
		if(i!=1)
		{
			cout<<"-";
		}
	}
	return 0;
}

