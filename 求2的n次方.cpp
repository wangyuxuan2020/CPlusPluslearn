#include<bits/stdc++.h>
using namespace std;
int k=1,n,a[100]={1};
int main()
{
	cin>>n;
	while(n--)
	{
		for(int i=0;i<k;i++)
		{
			a[i]*=2;
		 } 
		 for(int i=0;i<k;i++)
		 {
	 	if(a[i]>=10)
		 	{
		 		a[i+1]++;
		 		a[i]%=10;
			 }
		 }
		 if(a[k]!=0)
		 k++;
	 } 	
	for(int i=k-1;i>=0;i--)
	{
		cout<<a[i];
	}
	return 0;
}

