#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[110];
	int n,x;
	bool f=false;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	cin>>x;
	for(int i=1;i<=n;i++)
	{
		if(a[i]==x){
			cout<<i;
			f=true;
			break;
		}
		
	}
	if(f==false)
	{
		cout<<-1;
		
	}
	return 0;
}

