#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x,y,o;
	cin>>n>>x>>y;
	for(int i=(n-y)/x;i<=1;i--)
	{
		o=n-i*x;
		if(i*x+o==n&&o%y==0)
		{
			cout<<i<<" "<<o/y;
			break;
		} 
	}

	return 0;
}

