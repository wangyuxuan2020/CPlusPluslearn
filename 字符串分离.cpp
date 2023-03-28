#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	string s1,s2; 
	int p;
	cin>>s;
	p=s.size()-1;
	for(int i=0;i<=p;i++)
	{
		if(islower(s[i]))
		{
			s1+=s[i]; 
		}
		 if(isupper(s[p-i]))
		{
			s2+=s[p-i];
		}
				}
	cout<<s2+s1; 
	
	return 0;
}
