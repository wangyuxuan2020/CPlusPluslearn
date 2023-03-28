#include<bits/stdc++.h>
using namespace std;
string s[110];
int n;
bool camp(string s1,string s2)
{
	return(s1+s2>s2+s1);
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>s[i];
	}
	sort(s+1,s+1+n,camp);
	for(int i=1;i<=n;i++)
	{
		cout<<s[i];
	}

	return 0;
}

