#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,d;
	cin>>a;
	b=a/100;
	c=a/10%10;
	d=a%10;
	b=d*100+c*10+b;
	cout<<a+b;


	return 0;
}

