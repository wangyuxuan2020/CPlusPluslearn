#include<bits/stdc++.h>
using namespace std;
char a[30][30];
int d[30][30],fx[4]={0,1,0,-1};
int fy[4]={1,0,-1,0};
int mind=INT_MAX;
int tx,ty,n,m,sx,sy,ex,ey;
void dfs(int x,int y,int k)
{
	d[x][y]=k;
	for(int i=0;i<4;i++)
	{
		
		tx=x+fx[i];
		ty=y+fy[i];
		if(tx>=0&&tx<n&&ty<m&&ty>=0&&a[tx][ty]!='K')
		{
			if(a[tx][ty]=='.'&&k+1<d[tx][ty])
			{
				dfs(tx,ty,k+1);
			}else if(a[tx][ty]=='#'&&k+2<d[tx][ty])
			{
				dfs(tx,ty,k+2);
			}
			else if(a[tx][ty] == 'T')
			{
				d[tx][ty] = k + 1;
				if(d[tx][ty] < mind)
				{
					mind = d[tx][ty];
				}
				return;
			}
		}
	}
}
int main()
{
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
			d[i][j]=INT_MAX;
			if(a[i][j]=='S')
			{
				sx=i;
				sy=j;
			}

		}
	}
	
	dfs(sx,sy,0);

	if(mind==INT_MAX)
	{
		cout<<-1;
	}else
	{
		cout<<mind; 
	}


	return 0;
}

