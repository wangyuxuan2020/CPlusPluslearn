#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,y;
	for(int i=0;i<=50/3;i++)
	{
		x=50-i*3;
		for(int j=0;j<=x/2;j++)
		{
			y=x-j*2;
			if(i+j+y==30)
		{
			cout<<i<<' '<<j<<' '<<y<<endl;
		}
		}
		
	}

	return 0;
}

