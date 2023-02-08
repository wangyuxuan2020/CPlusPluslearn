#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[110][110],s=0,p=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=2;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=2;j++)
		{
		if(j==2)
		{
			if(a[i][j]-a[i][j-1]==1)
			{
				p++;
			}
			else if(a[i][j]-a[i][j-1]==2)
			{
				s++;
			}
			else if(a[i][j]==a[i][j-1])
			{
				s++;
				p++;
			}
			else if(a[i][j-1]-a[i][j]==1)
			{
				s++;
			}
			else if(a[i][j-1]-a[i][j]==2)
			{
				p++;
			}
		}
	}
	}
	if(s>p)
	{
		cout<<'b'<<' '<<"win";
	}
	else if(p>s)
	{
		cout<<'a'<<' '<<"win";
	}
	else
	{
		cout<<"tie";
	}
	return 0;
}

