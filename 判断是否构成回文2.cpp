#include<bits/stdc++.h>
using namespace std;
int main()
{	
	string s,s1;
	cin>>s;
	s=s.substr(0,s.size()-1);
	s1=s;
	reverse(s.begin(),s.end());
	if(s==s1)
	{
		cout<<"TRUE";
	}
	else
	{
		cout<<"FALSE";
	}



	return 0;
}

