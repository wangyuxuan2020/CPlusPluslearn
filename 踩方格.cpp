#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[21],b[21],c[21],d[21],n;
	a[1]=1;  
	b[1]=1;   
	c[1]=1;
	d[1]=a[1]+b[1]+c[1]; 
	cin>>n;
	for(int i=2;i<=n;i++)
	{
		a[i]=d[i-1]; 
		b[i]=a[i-1]+b[i-1]; 
		c[i]=a[i-1]+c[i-1]; 
		d[i]=a[i]+b[i]+c[i];
	}
	cout<<d[n];
	return 0;
}


