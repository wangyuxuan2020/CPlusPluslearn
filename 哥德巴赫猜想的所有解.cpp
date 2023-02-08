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
int main()
{
	int n,sum=0;
	int a[1010][4];
	
	cin>>n;
	for(int i=2;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			for(int k=j;k<=n;k++)
			{
				if(i+j+k==n&&isprime(i)&&isprime(j)&&isprime(k))
				{
					
					sum++;
				}
			}
		}
	}
	cout<<sum<<endl;
		for(int i=2;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			for(int k=j;k<=n;k++)
			{
				if(i+j+k==n&&isprime(i)&&isprime(j)&&isprime(k))
				{
					cout<<n<<'='<<i<<'+'<<j<<'+'<<k<<endl;
				}
			}
		}
	}

	return 0;
}

