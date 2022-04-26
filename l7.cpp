#include<bits/stdc++.h>
using namespace std;
const double pi=3.1415926535;
int main()
{
	//正方形 
	int a,b;
	cin>>a;
	b=a*a;
	cout<<b<<endl;
	
	//长方形
	 int c,d,e;
	cin>>c>>d;
	e=c*d;
	cout<<e<<endl;
	
	//圆
	double r;
	double S;
	cin>>r;
	S=r*pi;
	cout<<S<<endl;
	 
	//梯形
	double k;
	int z,x,h;
	cin>>z>>x>>h;
	k=(z+x)*h/2;
	cout<<k<<endl;
	 
	return 0;
}
