#include<bits/stdc++.h>
using namespace std;
int main()
{
	char s[100];
	int sum=0;
	cin.getline(s,100);
	for(int i=1;i<strlen(s);i++)
	{
		if(s[i]!=' ')
		{
			if(s[i+1]==' ')
			{
				sum++;
			}
		}
	 } 
	if(sum>=1)
	{
		cout<<sum+1;
	}
	else
	{
		cout<<1;
	}	
	return 0;
}

