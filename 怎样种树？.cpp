#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,y,n;
	cin>>n;
	for(int i=2;i<=n-4;i=i+2)
	{
		x=n-i;
		for(int j=2;j<=x-2;j=j+2)
		{
			y=x-j;
			if(i<=j&&j<=y&&y%2==0)
			{	
				cout<<i<<' '<<j<<' '<<y<<endl;
			}
		}
	}

	return 0;
}

