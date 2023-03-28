#include<bits/stdc++.h>
using namespace std;
string s,a,b;
int x,y;
int sum=INT_MAX;
 
bool isprime(int n)
{
	if(n<=1)
	{
		return false;
	}
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			return false;
		}
	}
	return true;
}
int main()
{		
	
	cin>>s;
	for(int i=1;i<=s.size()-1;i++)
	{
		a=s.substr(0,i);
		b=s.substr(i);
	
		x=stoi(a);
		y=stoi(b);
		if(isprime(x+y))
		{
			sum=min(sum,x+y);
		}
	}
	if(sum==INT_MAX)
	{
		cout<<-1;
	}
	else
	{
		cout<<sum;
	}

	return 0;
}

