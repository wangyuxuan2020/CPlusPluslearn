#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,s,x,h;
	for(n=0;;n++)
	{
		s=n/8;
		x=s/8;
		h=x/8;
		if(n%8==1&&s%8==1&&x%8==7)
		{
			s=n/17;
			x=s/17;
			if(n%17==4&&s%17==15&&s/17==2*h)
			{
				cout<<n;
				break;
			}
		}
	} 


	return 0;
}

