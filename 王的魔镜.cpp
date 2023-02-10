#include<bits/stdc++.h>
using namespace std;
char up(char c)
{
	if(c>='a'&&c<='z')
	{
		c-=32;
	}
	return c;
}
int main()
{
	char s[220];
	cin.getline(s,210);
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]!=' ')
		{
			if(i==0||s[i-1]==' ')
			{
				cout<<up(s[i]);
			}
		}
	}

	return 0;
}

