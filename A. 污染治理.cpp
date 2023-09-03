#include<bits/stdc++.h>
using namespace std;
char a[110][110];
int fx[4]={0,1,0,-1};
int fy[4]={1,0,-1,0};
int tx,ty;
int n,m;
int cnt;

void dfs(int x,int y)
{
	a[x][y]='p';
	 for(int i=0;i<4;i++)
	{
		tx=x+fx[i];
		ty=y+fy[i];
		if(a[tx][ty]=='*')
		{
			dfs(tx,ty);
		}
	}
 } 
int main()
{
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
			if(a[i][j]=='*')
			{
				cnt++;
				dfs(i,j);
			}
		}
	 } 
	cout<<cnt;
	return 0;
}

