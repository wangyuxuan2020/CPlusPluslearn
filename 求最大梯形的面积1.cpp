#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[110],b[110],c[110],sum[110],cnt;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i]>>b[i]>>c[i];
		sum[i]=(a[i]+b[i])*c[i];
	}
	for(int i=0;i<n;i++)
	{
		if(sum[i]<sum[i+1])
		{
			cnt=sum[i+1];
		}else
		{
			cnt=sum[i];
		}
	}
	
	cout<<sum;


	return 0;
}

