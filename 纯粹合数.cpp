#include<bits/stdc++.h>
using namespace std;
bool isprime(int n)
	{	
		if(n<=1) return false;
		for(int i=2;i<=sqrt(n);i++)
		{
			if(n%i==0)
			return true;
		}
		return false;
	}
int main()
{
	int a,b;
	for(int i=100;i<=999;i++)
	{
		a=i/100;
		b=i/10;
		if(isprime(i)&&isprime(a)&&isprime(b))
		{
			cout<<i<<endl;
		}
	}
}

