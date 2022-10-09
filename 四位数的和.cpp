#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,q,b,s,g;
	cin>>n;
	q=n/1000;
	b=n/100%10;
	s=n/10%10;
	g=n%10;
	cout<<q+b+s+g;

	return 0;
}

