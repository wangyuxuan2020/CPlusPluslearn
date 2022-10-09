#include<bits/stdc++.h>
using namespace std;
int main()
{
	int g,s,b;
	for(int i=1;i<=999;i++)
	{
		b=i/100;
		s=i/10%10;
		g=i%10;
		if((b==5||g==5||s==5)&&i%3==0)
		{
			cout<<i<<endl;
		}
	}
	 

	return 0;
}

