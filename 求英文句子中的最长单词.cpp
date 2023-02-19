#include<bits/stdc++.h>
using namespace std;
int main()
{
	char s[300];
	char r[300]={'\0'};
	char w[300];
	int k;
	cin.getline(s,265);
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]!=' ')
		{
			w[k++]=s[i];
			if(s[i+1]==' '||s[i+1]=='\0')
			{
				w[k]='\0';
				if(strlen(w)>strlen(r))
				{
					strcpy(r,w);
				}
				k=0;
			}
		}
	}
	
	cout<<r;
	return 0;
}
