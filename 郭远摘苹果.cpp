#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[20][20];
	int ma=INT_MIN;
	int mi=INT_MAX;
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin>>a[i][j];
			if(a[i][j]>ma)
			{
				ma=a[i][j];
			}
			if(a[i][j]<mi)
			{
				mi=a[i][j]; 
			}
		}
	}
	cout<<ma-mi;
	return 0;
}

