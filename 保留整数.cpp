#include<bits/stdc++.h>
using namespace std;
bool f;
int main()
{	string s,s1;
	
	getline(cin,s);
	for(int i=0;i<s.size();i++)
	{
		if(isdigit(s[i]))
		{
			s1+=s[i];
			f=false;
		}
		else if(f==false)
		{
			s1+='*';
			f=true;
		}
	}
	cout<<s1;



	return 0;
}

