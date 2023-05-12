#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int n;
	getline(cin,s);
	cin>>n;
	for(int i=0;i<=n;i++)
	{
		cout<<s[i];
	} 
	cout<<endl;
	for(int i=n;i<=s.size();i++)
	{
		cout<<s[i];
	}


	return 0;
}

