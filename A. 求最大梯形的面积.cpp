#include<bits/stdc++.h>
using namespace std;
int main()
{
	double n,a[110],b[110],c[110],mi=INT_MIN,s;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		cin>>b[i];
		cin>>c[i];
	}
	for(int i=1;i<=n;i++)
	{
		s=(a[i]+b[i])*c[i]/2;
		if(s>mi)
		{
			mi=s;
		}
	}
	cout<<fixed<<setprecision(1)<<mi;
	return 0;
}
