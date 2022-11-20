#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[110];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n-2;i++)
	{
		if(a[i]>a[i-1]&&a[i]>a[i+1])
		{
			cout<<a[i]<<endl;
		}
	}

	return 0;
}

