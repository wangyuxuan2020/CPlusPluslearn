#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i=0;
	cin>>n;
	while(n%2==0)
	{
		n=n/2;
		i++;
	}
	cout<<i;
	return 0;
}

