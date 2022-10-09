#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	n=n*1000;
	if(n%m==0)
	{
		cout<<n/m;
	}
	else
	{
		n=n/m;
		n=n+1;
		cout<<n;
	}

	return 0;
}

