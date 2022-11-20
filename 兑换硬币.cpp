#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,y,s=0;
	for(int i=1;i<=(100-2-5);i++)
	{
		x=100-i;
		for(int j=1;j<=(x-5)/2;j++)
		{
			y=x-2*j;
			if(y%5==0)
			{
				s=s+1;	
			}	
		}	
	}
	cout<<s;
	return 0;
}

