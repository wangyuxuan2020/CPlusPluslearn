#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[100],n;
	cin>>n;
	int b=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];	
			if(a[i]>=90)
		{
			b=b+1;
		}
	} 
	cout<<b;
	return 0;
}

