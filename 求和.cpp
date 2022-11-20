#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[100],s=0,v=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]%2==0)
		{
			s=s+a[i];
		}
		else
		{
			v=v+a[i];
		}
	}
	cout<<v<<endl<<s;

	return 0;
}

