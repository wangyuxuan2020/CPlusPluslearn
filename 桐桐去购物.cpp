#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,y,n,z;
	cin>>n>>z;
	for(int i=0;i<=n/5;i++)
	{
		x=n-5*i;
		for(int j=0;j<=(x-1)/3;j++)
		{
			y=x-3*j;
			if(i+j+y*3==z)
			{
				cout<<i<<' '<<j<<' '<<y*3<<endl;			}
		}
	}

	return 0;
}


