#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1,s2,r;
	char c;
	cin>>s1>>s2;
	s1+=s2;
	for(int i=0;i<s1.size();i++)
	{
		c=s1[i];
		if(r.find(c)==-1)
		{
			r+=c;
		}
	}
	
	cout<<r;
	

	return 0;
}

