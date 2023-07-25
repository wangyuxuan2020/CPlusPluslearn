#include<bits/stdc++.h>
using namespace std;
int a[110];
int n,x;
int sum,cnt;
int main()
{
	cin>>n>>x;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	for(int i=1;i<=n;i++)
	{
		sum+=a[i];
		if(sum>x)break;
		cnt++;
	}
	cout<<cnt;

	return 0;
}

