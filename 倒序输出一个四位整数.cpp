#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,d,e;
	cin>>a;
	b=a/1000;
	c=a/100%10;
	d=a/10%10;
	e=a%10;
	b=e*1000+d*100+c*10+b*1;
	cout<<b;


	return 0;
}

