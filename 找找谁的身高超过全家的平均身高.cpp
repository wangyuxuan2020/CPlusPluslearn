#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[20];
	int n;
	double v;
	cin>>n;
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		sum=sum+a[i];
	}
	v=sum*1.0/n;
	cout<<"AVE="<<fixed<<setprecision(1)<<sum*1.0/n<<endl;
	for(int i=1;i<=n;i++)
	{
		if(a[i]>v)
		{
			cout<<i<<':'<<a[i]<<' ';
		}
	}
	return 0;
}

