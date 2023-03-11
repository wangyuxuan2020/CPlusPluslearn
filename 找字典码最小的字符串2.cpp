#include<bits/stdc++.h>
using namespace std;
int main()
{
	string min,x;
	int n;
	cin>>n;
	cin>>min;
	for(int i=2;i<=n;i++)
	{
		cin>>x;
		if(x<min)
		{
			min=x;
		}
	}
	cout<<min;

	return 0;
}

