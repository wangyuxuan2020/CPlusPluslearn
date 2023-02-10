#include<bits/stdc++.h>
using namespace std;
int main()
{
	char s[300];
	int cnt=0;
	cin>>s;
	for(int i=0;i<strlen(s);i++)
	{
		cnt++;
		if(s[i]!=s[i+1])
		{
			if(cnt==1)
			{
				cout<<s[i];
			}else
			{
			cout<<cnt<<s[i];
			}
			cnt=0;
		}
	}


	return 0;
}

