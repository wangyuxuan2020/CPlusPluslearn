#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,o=0,j=0;
	cin>>n;
	for(int i=0;i<=n;i++)
	{
		if(i%2==0)
		{
			o=o+i;
		}
		else
		{
			j=j+i;
		}
	}
	cout<<j<<' '<<o;

	return 0;
}

