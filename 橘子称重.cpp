#include<bits/stdc++.h>
using namespace std;
int main()
{
	double s=0;
	
	int n,m,w[100];
	cin>>m>>n;
	for(int i=0;i<n;i++)
	{
		cin>>w[i];
		s=s+w[i]; 
	 } 
	 s=s/n*m;
	 cout<<fixed<<setprecision(1)<<s;

	return 0;
}

