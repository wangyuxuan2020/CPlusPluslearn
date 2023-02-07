#include<bits/stdc++.h>
using namespace std;

int he(int n)
{
	int sum=0;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			if(n/i==i)
			{
				sum+=i;
			}
			else
			{
				sum+=n/i+i;
			}
		}
	}
	return sum;
}


int main()
{
	int n;
	cin>>n;
	for(int i=2;i<=n;i++)
	{
		int x=he(i);
		if(i==he(x)&&i!=x&&he(i)<=n)
		{
			cout<<i<<' '<<x<<endl; 
		}
	}

	return 0;
}

