#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,c;
	for(int i=100;i<999;i++)
	{
		a=i/100;
		c=i%10;
		if(a==c&&c%2==0)
		{
			cout<<i<<endl;
		}
	}

	return 0;
}

