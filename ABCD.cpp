#include<bits/stdc++.h>
using namespace std;
int a,b,n,t;
int main()
{
	cin>>a>>b>>n;
	cout<<a/b<<'.';
	t=a%b;
	while(n--)
	{
		t*=10;
		cout<<t/b;
		t%=b;
		
	}


	return 0;
}

