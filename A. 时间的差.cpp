#include<bits/stdc++.h>
using namespace std;
int con(string s)
	{
		int h,m,e;
		h=(s[0]-48)*10+(s[1]-48);
		m=(s[3]-48)*10+(s[4]-48);
		e=(s[6]-48)*10+(s[7]-48); 
		return h*3600+m*60+e;
	}

int main()
{
	string s1,s2;
	cin>>s1>>s2;
	cout<<con(s1)-con(s2);
	

	return 0;
}

