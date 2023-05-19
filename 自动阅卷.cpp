#include<bits/stdc++.h>
using namespace std;
int x,y,z,p1,p2,n,cnt;

string s,s1,s2,s3;
int main()
{
	cin>>n;
	while(n--)
	{
		cin>>s;
		if(s.find('?')!=-1)
		{
			continue;
		}
		p1=s.find('+');
		if(p1==-1)
		{
			
			p1=s.find('-');
		}
		p2=s.find('=');
		s1=s.substr(0,p1);
		s2=s.substr(p1+1,p2-p1-1);
		s3=s.substr(p2+1);
		x=stoi(s1);
		y=stoi(s2);
		z=stoi(s3);
		if(s.find('+')!=-1)
		{
			if(x+y==z)
			{
				cnt++;
			}
		}
		else
		{
			if(x-y==z)
			{
				cnt++;
			}
		}
	}
	cout<<cnt;

	return 0;
}

