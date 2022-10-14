#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,d;
	a=999;
	for(int i=100;i<a;i++)
	{
		b=i/100;
		c=i/10%10;
		d=i%10;
		if(d*d*d+b*b*b+c*c*c==i)
		{
			cout<<i<<endl;
		}
	}

	return 0;
}

