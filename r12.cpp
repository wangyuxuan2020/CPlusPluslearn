#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,c=1,b,d=c;
	cin>>a;
	if(b>2){
		for(b=2;b<=a;b=b+c*2)
		{
			c=c+1;
			d = d + c*c;
		}
		a=b-c*2-a;
		d=d-c*a;
	}
	
	cout<<d;
	return 0;
}
	
	
