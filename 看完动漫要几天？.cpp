#include<bits/stdc++.h>
using namespace std;
int su(char s)
{
	return s-48;
}
int main()
{
	int v;
	char a[20],b[20],s; 
	int t1=0,t2=0;
	cin>>v;
	cin>>a;
	cin>>b;
	t1=	su(a[0])*10*60+su(a[1])*60+su(a[3])*10+su(a[4]);
	t2=	su(b[0])*10*60+su(b[1])*60+su(b[3])*10+su(b[4]);
	s=t2-t1;
	if(v%s==0)
	{
		cout<<v/s;
	}
	else
	{
		cout<<v/s+1;
	}
	return 0;
}


