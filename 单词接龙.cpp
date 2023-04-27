#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,w,w1[30],t;
	getline(cin,s);
	int cnt=0;
	for(int i=0;i<s.size();i++)
	{
		if(isalpha(s[i]))
		{
			w+=s[i];
			if(i==s.size()-1||!isalpha(s[i+1]))
			{
				cnt++;
				w1[cnt]=w;
				t=w1[cnt-1];
				if(cnt>=2&&w[0]!=t[t.size()-1])
				{
				cout<<'N';
				return 0;
				}
				w="";
			}
		}	
	} 
	cout<<'Y';
	

	return 0;
}

