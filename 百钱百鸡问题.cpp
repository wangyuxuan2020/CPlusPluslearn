#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,y;
	for(int i=1;i<=96/5;i++)
	{
		x=100-5*i;
		for(int j=1;j<=(x-1)/3;j++)
		{
			y=x-3*j;
			if(i+j+y*3==100)
			{
				cout<<i<<' '<<j<<' '<<y*3<<endl;			}
		}
	}

	return 0;
}

