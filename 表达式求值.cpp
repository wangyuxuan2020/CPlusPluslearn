#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int a[N];
string s,w;
char op[N];
int k1,k2,sum=0;
int main()
{
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		if(isdigit(s[i]))
		{
			w+=s[i];
			if(i==s.size()||!isdigit(s[i+1]))
			{
				a[++k1]=stoi(w)%10000;
				w="";
			}
		}else{
			op[++k2]=s[i];
		}
	}
	for(int i=1;i<=k2;i++)
	{
		if(op[i]=='*')
		{
			a[i+1]=(a[i]*a[i+1])%10000;
			a[i]=0;
		}
	}
	for(int i=1;i<=k1;i++)
	{
		sum=(sum+a[i])%10000;
	}
	cout<<sum;

	return 0;
}

