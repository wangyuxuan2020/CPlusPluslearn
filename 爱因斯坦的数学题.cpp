#include<bits/stdc++.h>
using namespace std;
int main()
{
	for(int i=1;;i++)
	{
		if(i%3==2&&i%5==4&&i%6==5&&i%7==0)
		{
			cout<<i;
			break;
		}
	}

	return 0;
}

