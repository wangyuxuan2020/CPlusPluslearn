#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m[11];
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>m[i];
	} 
	for(int i=1;i<=n;i++)
	{
		int s[17]={0};
		for(int j=1;m[i]>0;j++)
		{
			s[j]=m[i]%(i+1);
			m[i]=m[i]/(i+1);
		}	 
		for(int j=16;j>=1;j--)
		{
			cout<<s[j];
		}
		
	}


	return 0;
}

