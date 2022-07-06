#include<bits/stdc++.h>
using namespace std;
void change(int& a,int& b)
{
	int c;
	c=a;
	a=b;
	b=c;		
}

void change1(int *a,int *b)
{
	int c;
	c=*a;
	*a=*b;
	*b=c;		
}
int main()
{
	int x,y;
	cin>>x>>y;
	change1(&x,&y);
	cout<<x<<","<<y;	
	
	
	return 0;
}
