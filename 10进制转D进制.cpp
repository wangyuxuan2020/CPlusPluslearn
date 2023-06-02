#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n;
	char c;
	int o; 
	cin>>n;
	cin>>o;
	string s;
	if(o<=10) 
	{
		while(n)
		{
			c=n%o+'0';
			s=c+s;
			n=n/o;	
	 	} 
	 	if(s=="")
	 	{
	 		cout<<'0';
	 	}else
	 	{
	 		cout<<s;
	 	}
	}else
	{
		while(n)
		{
			if(n%o<10)
			{
				s=char (n%o+'0')+s;
			}else
			{
				s=char (n%o+'A'-10)+s;
			}
			n=n/o;
		}
		if(s=="")
		{
			cout<<'0';
		}else
		{
			cout<<s;
	 	}
	}
	
	return 0;
}

