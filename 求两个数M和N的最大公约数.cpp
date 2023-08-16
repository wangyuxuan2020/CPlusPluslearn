#include<bits/stdc++.h>
using namespace std;
int sum;
void zdgy(int n,int m)
{
	for(int i=0;i<n;i++)
	{
		if(n%i==0&&m%i==0)
		{
			sum=i;
		}
	}
 } 
int main(){

	int n,m;
	cin>>n>>m;
	zdgy(n,m);
	cout<<sum;
	
	return 0;
}
