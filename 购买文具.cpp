#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,y,s=0,n;
	cin>>n;
	n=n*10;
	for(int i=1;i<=(n-2-1)/8;i++)
	{
		x=n-8*i;
		for(int j=1;j<=(x-1)/2;j++)
		{
			y=x-2*j;
			if(i+j+y>30)
			{
				s=s+1;	
			}	
		}	d
	}
	cout<<s;
	return 0;
}


