#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,ma;
	cin>>a>>b>>c;
	ma=a;
	if(b>ma)
	{
		swap(ma,b); 
	} 
	 if(c>ma)
	{
	 	swap(ma,c);
	}
	 if(ma<b+c)
	{
	 	cout<<"Yes" ;
	}
	 else
	{
	 cout<<"No";
	}

	return 0;
}

