#include<bits/stdc++.h>
using namespace std;
string s1,s2;
int a[250],b[250],c[500];
int len;
int main()
{
	cin>>s1>>s2;
	if(s1=="0"||s2=="0")
	{
		cout<<0;
		return 0;
	}
	for(int i=0;i<s1.size();i++)
	{
		a[i]=s1[s1.size()-i-1]-'0';
	}
	for(int i=0;i<s2.size();i++)
	{
		b[i]=s2[s2.size()-i-1]-'0';
	}
	for(int i=0;i<s2.size();i++)
	{
		for(int j=0;j<s1.size();j++)
		{
			c[i+j]=c[i+j]+b[i]*a[j];
			if(c[i+j]>=10)
			{
				c[i+j+1]+=c[i+j]/10;
				c[i+j]%=10; 
			}
		}
	}
	len=s1.size()+s2.size()-1;
	if(c[len]==0)len--;
	for(int i=len;i>=0;i--)
	{
		cout<<c[i];
	}
	return 0;
}

