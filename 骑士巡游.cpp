#include<bits/stdc++.h>
using namespace std;
char a[10][10];
int  m,n;
int d[10][10];
int a1,a2;
int mind =INT_MAX;
int tx,ty;
int fx[8]={2,2,-1,-1,-2,-2,1,1};
int fy[8]={1,-1,-2,2,-1,1,2,-2};
void dfs(int x,int y,int k)
{
	d[x][y]=k;
	for(int i=0;i<8;i++)
	{
		tx=x+fx[i];
		ty=y+fy[i];
		if(tx>=0&&tx<n&&ty<m&&ty>=0)
		{	
			if(tx==(a1-1)&&ty==(a2-1))
			{
				d[tx][ty]=k+1;
				if(d[tx][ty] < mind)
				{
					mind = d[tx][ty];
				}
				return;
			}
			else if(k+1<d[tx][ty]){
				
				dfs(tx, ty, k+1);
			}
		}

	}
	
}
int main()
{
	int sx,sy;
	cin>>n>>m;
	cin>>sx>>sy;
	cin>>a1>>a2;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			d[i][j]=INT_MAX;
		}
	}
	
	
	dfs(sx-1,sy-1,0);

	
	cout<<mind; 


	return 0;
}

