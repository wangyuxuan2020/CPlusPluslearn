#include<bits/stdc++.h>
using namespace std;
int main()
{
	char s[800];
	char w[100];
	char r[100];
	bool f=false;
	int k=0,cnt1=0,cnt2;
	cin.getline(s,810);
	cin>>r;
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]!=' '&&s[i]!='.')
		{
			cnt2++;
			w[k++]=s[i];
			if(s[i+1]==' '||s[i+1]=='.')
			{
				cnt1++;
				w[k]='\0';
				if(strcmp(w,r)==0)
				{
					f=true;
					cout<<cnt1;
					break;
				}
				k=0;
			}
		}
		
	}
	if(!f)
	{
		cout<<cnt2;
	}	

	return 0;
}

