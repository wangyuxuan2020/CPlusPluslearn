#include<bits/stdc++.h>
using namespace std;
bool mojing(string s)
{
bool f=false;
if(s.size()%2==0)
{
	string s1=s;
	reverse(s.begin(),s.end());
	if(s==s1)
	{
		f=true ;
	}
	return f;
}
}
int main()
{
	string s;
	cin>>s;
	while(mojing(s))
	{
		s=s.substr(0,s.size()/2);
	}
	cout<<s.size();

	return 0;
}

