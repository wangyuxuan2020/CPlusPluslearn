#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,b,c,d;
	double x1,x2;
	a=2,b=24,c=7;
	d=b*b-4*a*c;
	x1=(-b+sqrt(d))/(2*a);
	x2=(-b-sqrt(d))/(2*a);
	cout<<x1<<" "<<x2<<endl;
	return 0;
}
