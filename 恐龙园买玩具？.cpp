#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x,y,z;
	cin>>n>>x>>y;
	for(int i=1;i<=(n-y)/x;i++)
	{
		z=n-i*x;
		if(z%y==0&&z/y+i>=5&&i>=z/y)
		{
			cout<<i<<' '<<z/y<<endl;
		}
	}


	return 0;
}


