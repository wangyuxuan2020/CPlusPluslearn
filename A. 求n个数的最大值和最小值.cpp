#include<bits/stdc++.h>
using namespace std;
int a[30];
int n;
int ma=1;
int mi=1;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	
	for(int i=2;i<=n;i++)
	{
		if(a[i]>a[ma])
		{
			ma=i;
		}
		if(a[i]<a[mi])
		{
			mi=i;
		}
	}
	cout<<a[ma]<<' '<<a[mi];

	return 0;
}

