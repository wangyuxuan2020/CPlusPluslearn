#include<bits/stdc++.h>
using namespace std;
int su(char s)
{
	return s-48;
}
int main()
{
	char a[20],b[20]; 
	int t1=0,t2=0;
	cin>>a;
	cin>>b;
	t1=	su(a[0])*10*60*60+su(a[1])*60*60+(su(a[3])*10+su(a[4]))*60+su(a[6])*10+su(a[7]);
	t2=	su(b[0])*10*60*60+su(b[1])*60*60+(su(b[3])*10+su(b[4]))*60+su(b[6])*10+su(b[7]);
	cout<<(t1-t2)<<endl;
	return 0;
}

