#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		if(x*x%7!=1)
		{
			cout<<x<<' ';
		}
	}

	return 0;
}

