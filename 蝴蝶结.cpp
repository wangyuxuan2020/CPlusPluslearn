#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	n=n/2+1;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n-i+1;j++)
		{
			cout<<'*';
		}
		cout<<endl; 
	}
	for(int i=n-1;i>=1;i--)
	{
		for(int j=1;j<=n-i+1;j++)
		{
			cout<<'*';
		}
		cout<<endl; 
	}

	return 0;
}


