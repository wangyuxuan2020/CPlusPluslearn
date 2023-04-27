#include<bits/stdc++.h>
using namespace std;
int main()
{
	int p=0;
	string s,ma,w;
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		if(isdigit(s[i]))
		{
			w+=s[i];
			if(i==s.size()||!isdigit(s[i+1]))
			{
				if(w.size()>ma.size()||w.size()==ma.size()&&w>ma)
				{
					ma=w;
					p=i-w.size()+2; 
				}
				w="";
			}
		}
	}
	cout<<p;

	return 0;
}

