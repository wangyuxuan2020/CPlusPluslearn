#include<bits/stdc++.h>
using namespace std;
int main()
{
	char str[40];
	char T,a1,a2;
	gets(str);
	cin>>T;
	int flag;
	if(T=='D')
	{
		cin>>a1;
		flag=0;
		char*p=str;
		while(*p)
		{
			if(*p==a1&&flag==0)
			{
				p++;
				flag=1;
			}
			cout<<p;
			p++;
		}
	}
	else if(T=='I')
	{
		cin>>a1>>a2;
		int len=strlen(str);
		int i=len-1;
		int pos;
		for(i;i>=0;i--)
			if(str[i]==a1)
			{
				pos=i;
				break;
			}
			if(T=='R')
			{
				cin>>a1>>a2;
				char*p=str;
				if(*p==a1)
				{
					*p=a2;
				}
				p++;
			}
		cout<<str;
	}


	return 0;
}

