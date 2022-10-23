#include<bits/stdc++.h>
using namespace std;
int main()
{
	for(int i=1;i<=4;i++)
	{
		int x=40-8*i;
		if(x%3==0)
		{
			cout<<i<<' '<<x/3;
		}
	}

	return 0;
}

