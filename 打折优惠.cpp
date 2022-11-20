#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,n[100];
	double s=0;
	cin>>a;
	for(int i=0;i<a;i++)
	{
		cin>>n[i];
		s=s+n[i];
	 } 
	 if(s>100)
	 {
	 	s=(s-100)*9/10+100;
	 	cout<<fixed<<setprecision(2)<<s;
	 }
	 else
	 {
	 	cout<<s;
	 }


	return 0;
}

