#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,q,b,s,g;
	cin>>n;
	q=n/1000+5;
	b=n/100%10+5;
	s=n/10%10+5;
	g=n%10+5;
	q=q%10;
	b=b%10;
	s=s%10;
	g=g%10;
	cout<<g<<s<<b<<q;
	

	return 0;
}

