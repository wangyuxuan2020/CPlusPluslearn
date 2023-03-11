#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	bool f=true;
	getline(cin,s);
	if(isdigit(s[0]))
	{
		f=false;
	}
	else if(s=="int"||s=="double"||s=="cout"||s=="cin")
	{
		f=false;
	}
	else if(s.find(' ')!=-1)
	{
		f=false;
	}
	else
	{
		for(int i=0;i<s.size();i++)
		{
			if(!isalpha(s[i])&&!isdigit(s[i])&&s[i]!='-')
			{
				f=false;
				break;
			}
		}
	}
	if(f)
	{
		cout<<"yes";
	}
	else
	{
		cout<<"no";
	}

	return 0;
}

