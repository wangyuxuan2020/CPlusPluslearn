#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,sum=0;
	cin>>n;
	while(n!=0)
	{	
		sum=10*sum+n%10;
		n=n/10;
	}
	cout<<sum;


	return 0;
}

