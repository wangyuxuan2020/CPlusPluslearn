#include<bits/stdc++.h>
using namespace std;
int main()
{
	double n,sum=0,i=0;
	cin>>n;
	while(sum<=n)
	{
		i++;
		sum=sum+1/i;
	}
	cout<<i;

	return 0;
}

