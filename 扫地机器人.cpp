#include<bits/stdc++.h>
using namespace std;
int a[20][20];
int k;
int n,m;

void dfs(int x,int y)
{
	a[x][y]=++k;
	
	if(y+1<=m&&a[x][y+1]==0) dfs(x,y+1);
	if(x+1<=n&&a[x+1][y]==0) dfs(x+1,y);
	if(y-1>=1&&a[x][y-1]==0)  dfs(x,y-1);
	if(x-1>=1&&a[x-1][y]==0) dfs(x-1,y);
 } 
int main()
{
	cin>>n>>m;
	dfs(1,1);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cout<<setw(3)<<a[i][j];
		}
		cout<<endl;
	}


	return 0;
}

