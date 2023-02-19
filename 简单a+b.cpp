#include<bits/stdc++.h>
using namespace std;
int num(char s[])
{
	int r=0;
	for(int i=0;i<strlen(s);i++)
	{
		r=r*10+(s[i]-'0');
	}
return r; 
}

int main()
{
	char s[100]={'\0'},s1[100]={'\0'},s2[100]={'\0'};
	int p,k=0;
	cin>>s;
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]=='+')
		{
			p=i;
			break;
		}
			
	} 
	for(int i=0;i<p;i++)
	{
		s1[i]=s[i];
	}
	for(int i= p+1;i<strlen(s)-1;i++)
	{
		s2[k++]=s[i];
	}
	cout<<num(s1)+num(s2);
	return 0;
}

