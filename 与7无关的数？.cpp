#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,b,s,g,h=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		b=i/100;
		s=i/10%10;
		g=i%10;
		if(i%7==0||b==7||s==7||g==7)
		{
		}
		else
		{
			h=h+i; 
		}
	}
	cout<<h;
	return 0;
}

