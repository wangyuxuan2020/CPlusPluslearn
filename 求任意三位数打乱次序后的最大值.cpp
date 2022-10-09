#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,b,c;
	cin>>n;
	a=n/100;
	b=n/10%10;
	c=n%10;
	if(a<b)
	{
		swap(a,b);
	}
	if(b<c)
	{
		swap(b,c); 
	}
	if(a<b)
	{
		swap(a,b);
	}
	n=a*100+b*10+c;
	cout<<n;
	
	return 0;
}

