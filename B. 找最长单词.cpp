#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,w;
	int len;
	string ans;
	getline(cin,s);
	for(int i=0;i<s.size();i++)
	{
		if(isalpha(s[i]))
		{
			w+=s[i];
			
			if(!isalpha(s[i+1]))
			{
				
				if(w.find('a')!=-1&&w.size()>len)
				{
					ans=w;
					len=w.size();
				}
				w="";
			}
		}
	}
	if(len==0)
	{
		cout<<"NO";
	}
	else
	{
		cout<<ans;
	}

	return 0;
}

