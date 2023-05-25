#include<bits/stdc++.h>
using namespace std;
struct stu
{
	long n;
	double m;
}c[110];
bool cmp(stu a1,stu a2)
{
	if(a1.m>a2.m)
	{
		return true;
	}
	return false;
}
int a,b; 
int main()
{
	cin>>a>>b;
	for(int i=0;i<a;i++)
	{
		cin>>c[i].n>>c[i].m;
	}
	sort(c,c+a,cmp);
	
	printf("%d %g", c[b-1].n, c[b-1].m);

	return 0;
}

