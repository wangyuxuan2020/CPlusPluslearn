#include<bits/stdc++.h>
using namespace std;
int main()
{
	double a,b,c;
	cin>>a>>b>>c;
	if(b>a)
	{
		swap(a,b);	
	} 
	if(c>b)
	{
		swap(c,b);
	}
	if(b>a)
	{
		swap(a,b);
	}
	if(a*a==b*b+c*c)
	{
		b=b*c/2;
		cout<<fixed<<setprecision(1)<<b;
	}
	else
	{
		cout<<"No";
	}

	return 0;
}

