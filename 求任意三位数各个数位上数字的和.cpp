#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int b,s,g;
	cin>>n;
	b=n/100;
	s=n/10%10;
	g=n%10;
	cout<<g+b+s; 


	return 0;
}

