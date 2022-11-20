#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x,y,z,s=0;
	cin>>n>>x>>y;
	for(int i=1;i<=(n-10*y)/x;i++)
	{
		z=n-i*x;
		if(z%y==0&&z/y>=10&&i>=10)
		{
			s=s+1;	
		}
	}
	cout<<s;
	return 0;
}

