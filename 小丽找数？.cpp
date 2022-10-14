#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,q,b,c,g,h,s=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		q=i/1000;
		b=i/100%10;
		c=i/10%10;
		g=i%10;
		h=q+b+c+g; 
		if(h%2==0||h%5==0)
		{
		}
		else
		{
			s=s+1;
		}
	}
	cout<<s;

	return 0;
}

