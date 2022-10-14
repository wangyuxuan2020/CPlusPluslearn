#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	if(b>a)
	{
		swap(b,a);	
	} 
	if(c>b)
	{
		swap(b,c);
	}
	if(b>a)
	{
		swap(a,b);
	}
	int s=a*b+c*a*2+c*b*2;
	cout<<s;
	return 0;
}

