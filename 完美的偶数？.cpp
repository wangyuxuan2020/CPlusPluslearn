#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[100],g,s,b,q,w;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		g=a[i]%10;
		s=a[i]/10%10;
		b=a[i]/100%10;
		q=a[i]/1000;
		if(g%2==0&&s%2==0&&b%2==0&&q%2==0&&(a[i]/1000>1||a[i]/10<9&&a[i]/10>1))
		{
			cout<<a[i]<<endl;
		}


	}
	return 0;
}

