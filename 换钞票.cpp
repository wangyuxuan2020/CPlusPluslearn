#include<bits/stdc++.h>
using namespace std;
int main()
{
	for(int i=1;i<10;i++)
	{
		int a=100-i*10;
		if(a%20==0)
		{
			cout<<i<<' '<<a/20<<endl;	
		} 
	}

	return 0;
}

