#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	int a,b,c,d,e,f;
	cin>>f;
	a=f/10000;
	b=f/1000%10;
	c=f/100%10;
	d=f/10%10;
	e=f%10;
	cout<<a+b+c+d+e;


	return 0;
}

