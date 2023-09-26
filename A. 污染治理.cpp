#include<bits/stdc++.h>
using namespace std;
char a[110][110];
int fx[4]={0,1,0,-1};
int fy[4]={1,0,-1,0};
int tx,ty;
int n,m;
int cnt;
int t=0,sum=0,ma;
 

void dfs(int x,int y)
{
	a[x][y]='~';
	sum++;
	t++;
	
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
				t=0;
				dfs(i,j);
				ma=max(ma,t);
			}
		}
	 } 
	cout<<cnt<<' '<<sum<<' '<<ma;
	return 0;
}

