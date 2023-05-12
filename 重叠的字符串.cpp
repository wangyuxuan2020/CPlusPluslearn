#include<bits/stdc++.h>
using namespace std;
int fun(string s1,string s2)
{
	int len=min(s1.size(),s2.size());
	for(int i=len;i>=1;i--)
	{
		string t1,t2;
		t1=s1.substr(s1.size()-i,i);
		t2=s2.substr(0,i);
		if(t1==t2)
		{
			return i;
		}
 	}
 	return 0;
}
string s1,s2;
int main()
{	
	cin>>s1>>s2;
	cout<<max(fun(s1,s2),fun(s2,s1));


	return 0;
}

