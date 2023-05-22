#include<bits/stdc++.h>
using namespace std;
struct stu
{
	string name;
	string s;
	string num;
	char gender;
}a[1010];
int n,m;
string s1,s2;
char fun(string s)
{
	for(int i=1;i<=n;i++)
	{
		if(isdigit(s[0])&&a[i].num==s) 
		{
			return a[i].gender;
		}else if(a[i].name==s)
		{
			return a[i].gender;
		}
	}
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].name>>a[i].num>>a[i].gender;
	}
	cin>>m;
	while(m--)
	{
		cin>>s1>>s2;
		if(fun(s1)==fun(s2))
		{
			cout<<'N'<<endl;
		}else
		{
			cout<<'Y'<<endl;
		}
	}

	return 0;
}

