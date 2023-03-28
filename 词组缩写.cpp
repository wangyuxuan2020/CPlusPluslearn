#include<bits/stdc++.h>
using namespace std;
string s;
int main()
{
	getline(cin,s);
	for(int i=0;i<s.size();i++)
	{
		if(i==0&&isalpha(s[i])||s[i-1]==' '&&isalpha(s[i]))
		{
			cout<<(char)toupper(s[i]);
		}
	}


	return 0;
}

