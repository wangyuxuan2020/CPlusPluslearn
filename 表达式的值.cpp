#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,w;
	int sum;
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		w+=s[i];
		if(i==s.size()-1||s[i+1]=='+')
		{
			sum+=stoi(w);
			w="";
		}
	}
	cout<<sum;

	return 0;
}

