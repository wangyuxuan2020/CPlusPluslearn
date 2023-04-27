#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
	int t;
	while(a%b)
	{
		t=a%b;
		a=b;
		b=t;	
	}
	return b;
}
	string s,s1,s2;
	string fz1,fm1,fz2,fm2;
	int p;
	int r1,r2;
	int t;
	bool f;
int main()
{
//	cout<<gcd(11,97);
	
	cin>>s;
	p=s.find('+');
	if(p==-1)
	{
		p=s.find('-');
	}
	s1=s.substr(0,p);
	s2=s.substr(p+1);
//	cout<<s1<<' '<<s2;
	fz1=s1.substr(0,s1.find('/'));
	fm1=s1.substr(s1.find('/')+1);
	fz2=s2.substr(0,s2.find('/'));
	fm2=s2.substr(s2.find('/')+1);
//	cout<<fz1<<' '<<fm1<<' '<<fz2<<' '<<fm2;
	int x1,y1,x2,y2;
	x1=stoi(fz1);
	y1=stoi(fm1);
	x2=stoi(fz2);
	y2=stoi(fm2);
	r2=y1*y2;
	if(s.find('+')!=-1)
	{
		r1=x1*y2+x2*y1;
		if(r1<0)
		{
			r2=x1*y2-x2*y2;
			cout<<'-';
			r1=r1*-1;
		}
	}
	cout<<r1<<'/'<<r2;
	return 0;
}

