#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[110];
	int n,x;
	int p=-1;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	cin>>x;
	for(int i=1;i<=n;i++)
	{
		if(a[i]==x)
		{
			p=i;
			break;
		}
		
	}
	cout<<p;
	return 0;
}

