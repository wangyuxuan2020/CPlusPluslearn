#include <bits/stdc++.h> 
using namespace std;
int a[1000010];
int main()
{
	a[1]=1;
	a[2]=1;
	for(int i=3;i<=1000000;i++)
		a[i]=(a[i-1]+a[i-2])%1000;
	int n,t;
	cin>>n; 
	for(int i=1;i<=n;i++)
	{
		cin>>t;
		cout<<a[t]<<endl;
	} 
	return 0;
}
