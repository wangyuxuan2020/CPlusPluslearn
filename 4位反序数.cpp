#include<bits/stdc++.h>
using namespace std;
int main()
{
	int g,s,b,q,h;
	for(int i=1000;i<=9999;i++)
	{
		q=i/1000;
		b=i/100%10;
		s=i/10%10;
		g=i%10;
		h=q+b*10+s*100+g*1000;
		if(h==i*9)
		{
			cout<<i<<endl;
		}
	}


	return 0;
}

