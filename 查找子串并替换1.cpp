#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a,b,c,d;
	getline(cin,a);
	getline(cin,b);
	getline(cin,c);
	int p;
	p=a.find(b);
	while(p!=-1)
	{
		a.replace(p,b.length(),c);
		p=p+c.length();
		p=a.find(b,p);
	}
	cout<<a<<endl;
	return 0;
}

