#include<bits/stdc++.h>
using namespace std;
string s,s1,s2,a,b;
int x,y,z;
int p;
bool f=true;

int main()
{
	cin>>s;
	p=s.find('=');
	s1=s.substr(0,p);
	s2=s.substr(p+1);
	cout<<s1<<' '<<s2<<endl;
	for(int i=1;i<=s1.size()-1;i++)
	{
		a=s1.substr(0,i);
		b=s1.substr(i);
		cout<<a<<' '<<b;
		x=stoi(a);
		y=stoi(b);
		if(x+y==z)
		{
			f=true;
			cout<<a<<'+'<<b<<'='<<z<<endl;
		}
	}
	if(!f)
	{
		cout<<"Impossible!";
	}

	return 0;
}

