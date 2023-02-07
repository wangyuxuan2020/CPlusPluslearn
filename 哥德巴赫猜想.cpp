#include<bits/stdc++.h>
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
void caixiang(int n)
{
	for(int i=2;i<=n/2;i++)
	{
		if(isprime(i)&&isprime(n-i))
		{
			cout<<n<<'='<<i<<'+'<<n-i<<endl;	
		}	
	} 
}
int main()
{
	int n;
	cin>>n;
	for(int i=4;i<=n;i+=2)
	{
		caixiang(i); 
	}

	return 0;
}

