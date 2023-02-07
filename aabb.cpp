#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,d;
	for(int i=1000;i<=9999;i++)
	{
		a=i/1000;
		b=i/100%10;
		c=i/10%10;
		d=i%10;
		if(sqrt(i)==int(sqrt(i)))
		{
			if(a==b&&c==d)
			{
				cout<<i<<endl;
			}
		}
	}	

	return 0;
}

