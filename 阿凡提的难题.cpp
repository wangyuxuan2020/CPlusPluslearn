#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,a,b,n;
	cin>>x>>a>>b;
	for(int i=2;i<=(x-2*b)/a;i+=2)
	{
		n=x-a*i;
		if(n%b==0&&x/b%2==0)
		{
			cout<<i<<' '<<n/b<<endl;	
		}
	}
	return 0;
}

