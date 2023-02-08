#include<bits/stdc++.h>
using namespace std;
using namespace std;
bool isprime(int n)
{	
	if(n<=1) return false;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		return false;
	}
		return true;
}
bool pal(int n)
{
	int n1=0,t=n;
	while(n)
	{
		n1=n1*10+n%10; 
		n/=10;
	}
	if(t==n1)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	for(int i=10;i<=1000;i++)
	{
		if(pal(i))
		{
			if(isprime(i))
			{
				cout<<i<<endl;
			}
		}
	}

	return 0;
}

