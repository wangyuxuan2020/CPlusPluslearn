#include<bits/stdc++.h>
using namespace std;
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
			if(i!=1&&j!=1&&j!=n)
			{
				if(a[i][j]>a[i][j-1])
				{
					if(a[i][j]>a[i][j+1])
					{
						if(a[i][j]>a[i-1][j])
						{
							if(a[i][j]>a[i-1][j-1])
							{
								if(a[i][j]>a[i-1][j+1])
								{
									if(a[i][j]>a[i+1][j])
									{
											cout<<a[i][j]<<endl;
									}
								}
							}
						}
					}
				}
			}
		}
	}

	return 0;
}

