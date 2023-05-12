#include<bits/stdc++.h>
using namespace std;
int y[110];
struct num
{
	int x;
	int b;
	int c;
	int d;
	int e;
	int f;
}a[110];
int n;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].x>>a[i].b>>a[i].c>>a[i].d>>a[i].e>>a[i].f;
	}
	for(int i=1;i<=n;i++)
	{
		y[i]=(a[i].c+a[i].d+a[i].e)%3;
	}


	return 0;
}

