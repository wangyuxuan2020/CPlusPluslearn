#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[100],s=0;
	int n;
	for(int i=0;i<10;i++)
	{
		cin>>a[i];
	}
	cin>>n;
	n=n+30;
	for(int i=0;i<10;i++)
	{
		if(a[i]<=n)
		{
			s=s+1;
		}	
	}
	cout<<s;

	return 0;
}

