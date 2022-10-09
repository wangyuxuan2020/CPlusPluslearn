#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i=1;
	for(;;)
	{
		if(i%5==1&&i%6==5&&i%7==4&&i%11==10)
		{
			cout<<i;
			break;	
		}
		i++;
		
	}

	return 0;
}

