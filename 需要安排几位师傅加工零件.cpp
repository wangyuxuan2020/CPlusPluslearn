#include<bits/stdc++.h>
using namespace std;
int n,m,a[105],sum,ct;
int main()
{
    cin>>m>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    sort(a+1,a+n+1,greater<int>());
    for(int i=1; i<=n; i++)
    {
    	if(sum<m)ct++,sum+=a[i];
    	else
    	{
    		cout<<ct;
    		return 0;
		}
	}
	cout<<"NO";
    return 0; 
}
