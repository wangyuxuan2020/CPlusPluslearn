#include<bits/stdc++.h>
using namespace std;
int main()
{
	bool f=true;
	string s,o,t;
	int p;
	getline(cin,s);
	getline(cin,o);
	if(o[0]=='D')
	{
		p=s.find(o[2]);
		if(p!=-1)
		{
			s.erase(p,1);
		}
		else
		{
			f=false;
		}
	} 
	if(o[0]=='I')
		{
			p=s.rfind(o[2]);
			if(p!=-1)
			{
				s.insert(p,1,o[4]);
			}
			else
			{
				f=false;
			}
		}
	else if(o[0]=='R')
	{
		p=s.find(o[2]);
		if(p!=-1)
		{
			t=o[4];
			while(p!=-1)
			{
				s.replace(p,1,t);
				p=s.find(o[2],p+1);
			}
		}
		else
		{
			f=false;
		}
	}
	if(f)
	{
		cout<<s;
	}
	else 
	{
		cout<<"Not exist";
	}

	return 0;
}

