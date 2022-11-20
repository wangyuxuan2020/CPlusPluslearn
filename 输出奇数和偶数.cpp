#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,n[100];
	cin>>a;
	for(int i=0;i<a;i++)
	{
		cin>>n[i];
		if(n[i]%2!=0)
		{
			cout<<n[i]<<' '; 
		}
	}
	cout<<endl;
	for(int i=0;i<a;i++)
	{
		if(n[i]%2==0)
		{
			cout<<n[i]<<' ';
		}
	}


	return 0;
}

