#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[100];
	cin>>n;
	int ma,mi;
	ma=INT_MIN;
	mi=INT_MAX;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]>ma)
	 	{
	 		ma=a[i];
		 }
		 if(a[i]<mi)
		 {
		 	mi=a[i];
		}
	 } 
	 cout<<ma<<' '<<mi;

	return 0;
}

