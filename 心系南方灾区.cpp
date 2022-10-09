#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m,n;
	cin>>m>>n;
	if(m%n==0)
	{
		cout<<m/n;
	}
	else
	{
		m=m/n;
		m=m+1;
		cout<<m;
	}


	return 0;
}

