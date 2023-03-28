#include<bits/stdc++.h>
using namespace std;
string s,s1,s2,s3;
int p1,p2;
int a,b,c;
int main()
{	
	cin>>s;
	p1=s.find('+');
	p2=s.find('*');
	s1=s.substr(1,p1-1);
	s2=s.substr(p1+1,p2-p1-2);
	s3=s.substr(p2+1);
	a=stoi(s1);
	b=stoi(s2);
	c=stoi(s3);
	cout<<(a+b)*c;
	 

	return 0;
}

