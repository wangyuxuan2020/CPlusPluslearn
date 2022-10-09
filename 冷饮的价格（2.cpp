#include<bits/stdc++.h>
using namespace std;
int main()
{	
	int n;
	double p;
	 
	cin>>n;
	if(n>=30)
	{
		p=n*1;
	}
	else if(n>19)
	{
		p=n*1.2;
	}
	else if(n>9)
	{
		p=n*1.5;
	}
	else
	{
		p=n*1.8;
	}
	cout <<fixed<<setprecision(1)<<p;

	return 0;
}

