#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,y,s=0;;
	for(int i=1;i<=(100-2)/9;i++)
	{
		x=100-9*i;
		for(int j=1;j<=x-1;j++)
		{
			y=x-j;
			if(2*i+2*j+4*y==100)
			{	s=s+1;
				cout<<i<<' '<<j<<' '<<y<<endl;
			}
		}
	}
	cout<<s;

	return 0;
}

