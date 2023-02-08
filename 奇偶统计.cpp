#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,x,o,a[110][110];
	x=o=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin>>a[i][j];
			if(a[i][j]%2==0)
			{
				o++;
			}
			else
			{
				x++;
			}
		}
	}
	cout<<x<<' '<<o;
	return 0;
}

