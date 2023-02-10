#include<bits/stdc++.h>
using namespace std;
bool pal(char s[])
{
	for(int i=0;i<strlen(s)/2;i++)
	{
		if(s[i]!=s[strlen(s)-i-1])
		return false;
	}
	return true;
}
int main()
{
	char s[110];
	cin>>s;
	while(strlen(s)%2==0&&pal(s))
	{
		s[strlen(s)/2]='\0';
	}
	cout<<strlen(s);
	return 0;
}

