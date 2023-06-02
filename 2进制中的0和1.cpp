#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,s[32];
	cin>>a;
	int sum=0, cnt=0;
	if(a==0)
	{
		cout<<1<<' '<<0;
	}else
	{
		for(int i=0;a>0;i++)
		{
			s[i]= a%2;
			a=a/2;
			if(s[i]== 1)
			{
				sum++;
			}	
			else
			{
				cnt++;
			}
		}
		cout<<cnt<<' '<<sum;
	}
			
	
	 
	return 0;
}

