#include<bits/stdc++.h>
using namespace std;
int main()
{	
	string s;
	char c;
	int p;
	cin>>s>>c;
	p=s.find(c);
	while(p!=-1)
	{
		s.erase(p,1);
		p=s.find(c);
	}
	cout<<s;
	return 0;
}

