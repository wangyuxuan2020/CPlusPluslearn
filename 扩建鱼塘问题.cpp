#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b;
	c=a*b;
	if(a>b)
	{
		b=a;
	}
	else
	{
		a=b;
	} 
	a=a*a;
	cout<<a-c;

	return 0;
}

