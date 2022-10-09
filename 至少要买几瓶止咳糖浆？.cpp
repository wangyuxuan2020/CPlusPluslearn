#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	cin>>a;
	if(a>10)
	{
		b=3*25*5;
	}
	else if(a>6)
	{
		b=3*5*15;
	}
	else
	{
		b=3*5*5; 
	}
	if(b%120==0)
	{
		cout<<b/120;
	}
	else
	{
		cout<<b/120+1;
	}
	
	
	return 0;
}

