#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,y; 
	for(int i=1;i<=(36-3-1)/4;i++)
	{
		x=36-4*i;
		for(int j=1;j<=(x-1)/3;j++)
		{
			y=x-3*j;
			if(i+j+2*y==36)
			{
				cout<<i<<' '<<j<<' '<<2*y<<endl;	
			}	
		}	
	}
	return 0;
}


