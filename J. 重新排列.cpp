#include<bits/stdc++.h>
using namespace std;
string s;
int main()
{

	cin>>s;
	sort(s.begin(),s.end());
	if(s[0]=='0')
	{
		for(int i=0;i<s.size();i++)	
		{
			if(s[i]!='0')
			{
				char t;
				t=s[0];
				s[0]=s[i];
				s[i]=t;
				break;
			}
		}
	}
	cout<<s;
	return 0;
}

