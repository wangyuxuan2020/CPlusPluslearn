#include<bits/stdc++.h>
using namespace std;
int a[200];
string s;
int main()
{
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		a[s[i]]++;
	}
	int ma=97;
	for(int i=98;i<=122;i++)
	{
		if(a[i]>=a[ma])
		{
			ma=i;
		}
	}
	char c=ma;
	cout<<c;

	return 0;
}

