#include<bits/stdc++.h>
using namespace std;
int main()
{
	char a[90];
	cin.getline(a,90);
	for(int i=0;i<strlen(a);i++)
	{
		if(a[i]<'z'&&a[i]>='a')
		{
			a[i]++;
		}
		else if(a[i]=='z')
		{
			a[i]='a';
		}
		else if(a[i]<'Z'&&a[i]>='A')
		{
			a[i]++;
		}
		else if(a[i]=='Z')
		{
			a[i]='A';
		}
		cout<<a[i];
	}

	return 0;
}

