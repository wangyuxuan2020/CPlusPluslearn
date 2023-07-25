#include<bits/stdc++.h>
using namespace std;
string add(string s1,string s2)
{
	string r;
	int a[1000]={0};
	int b[1000]={0};
	int c[1000]={0};
	for(int i=0;i<s1.size();i++)
	{
		a[i]=s1[s1.size()-1-i]-'0';
	}
	for(int j=0;j<s2.size();j++)
	{
		b[j]=s2[s2.size()-1-j]-'0';
	}
	int len=max(s1.size(),s2.size());
	for(int i=0;i<len;i++)
	{
		c[i]+=a[i]+b[i];
		if(c[i]>=10)
		{
			c[i+1]++;
			c[i]-=10;
		}
	}
	if(c[len])len++;
	 for(int i=len-1;i>=0;i--)
	 {
	 	r=r+char(c[i]+'0');
	 }
	return r;
	
}
int main()
{
	string x,y,z;
	int n;
	cin>>n;
	x="1";
	y="2";
	if(n==1)
	{
		cout<<x;
	 } 
	 else if(n==2)
	 {
	 	cout<<y;
	 }else
	 {
	 	for(int i=3;i<=n;i++)
	 	{
	 		z=add(add(y,y),x);
	 		x=y;
	 		y=z;
		 }
		 cout<<z;
	 }
	

	return 0;
}

