#include<bits/stdc++.h>
using namespace std;
int a[110][110];
int fx[4]={0,1,0,-1};
int fy[4]={1,0,-1,0};
int tx,ty,n,ha,la,hb,lb;
void dfs(int x,int y)
{
	a[x][y]=3;
	
	if(x==hb&&y==lb)
	{
		cout<<"YES";
		exit(0);
	}	
	
	 for(int i=0;i<4;i++)
	{
		
		tx=x+fx[i];
		ty=y+fy[i];
		if(tx>=1&&tx<=n&&ty>=1&&ty<=n&&a[tx][ty]==0)
		{
			dfs(tx,ty);
		}	
	}
 } 
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>a[i][j];
		}
	}
	cin>>ha>>la>>hb>>lb;
	if(a[ha][la]==1)
	{
		cout<<"NO";
	}else
	{
		dfs(ha,la);
		cout<<"NO";
	}
	
	return 0;
}

