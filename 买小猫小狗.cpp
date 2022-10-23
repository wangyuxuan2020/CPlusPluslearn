#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,a,b,n,f=0;
	cin>>x>>a>>b;
	for(int i=1;i<=(x-b)/a;i++)
	{
		n=x-a*i;
		if(n%b==0)
		{
			f=f+1;
		}
	}
	cout<<f;

	return 0;
}

