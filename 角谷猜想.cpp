#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,s=0;
	cin>>n;
	for(;;)
	{
		if(n==1)
		{
			break;
		}
		if(n%2==0)
		{
			n=n/2;
			s=s+1;
		}
		else
		{
			n=n*3+1;
			s=s+1;
		}
	}
	cout<<s;

	return 0;
}

