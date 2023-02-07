#include<bits/stdc++.h>
using namespace std;
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
	int  n,cnt=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(pal(i))
		{
			cnt++;
		} 
	} 
	cout<<cnt;
	return 0;
}

