#include<bits/stdc++.h>
using namespace std;
int main()
{
	char a[300];
	int s[200]={0};
	cin.getline(a,300);
	
	for(int i=0;i<strlen(a);i++)
	{
		s[a[i]]++;
	}
	for(char c='a';c<='z';c++)
	{
		if(s[c])
		{
			cout<<c;
		}
		
	}
	cout<<endl;
	for(char c='a';c<='z';c++)
	{
		if(s[c])
		{
			cout<<s[c];
		}
	}
	return 0;
}

