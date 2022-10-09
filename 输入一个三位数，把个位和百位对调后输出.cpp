#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int g,s,b;
	cin>>n;
	b=n/100;
	s=n/10%10;
	g=n%10;
	n=g*100+s*10+b;
	cout<<n;
	

	return 0;
}

