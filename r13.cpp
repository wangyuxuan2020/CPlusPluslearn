#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,c;
	icn>>a;
	for(int b=0;b<10000;b++)
	{
		if(a%b==0)
		{
			c=0;	
		}	
		if(c==1)
		{
			a--;
			if(a==0)
			{
				cout<<b;
			}
			
		}
	}
	
	
	return 0;
} 
