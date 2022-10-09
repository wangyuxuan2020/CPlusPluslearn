#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a;
	cin>>a;
	if(a/1000000000!=0)
	{
		cout<<"shi yi";
	}
	else if(a/100000000!=0)
	{
		cout<<"yi"; 
	}
	else if(a/10000000!=0)
	{
		cout<<"qian wan";
	}
	else if(a/1000000!=0)
	{
		cout<<"bai wan";
	}
	else if(a/100000!=0)
	{
		cout<<"shi wan"; 
	}
	else
	{
		cout<<"wan";
	}

	return 0;
}

