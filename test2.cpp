#include<bits/stdc++.h>
using namespace std;
int main()
{
	char x[30],s[2][20];
	bool find = false;
	int n= 0;
	cin>>x;

	char *p = strtok(x, "=");
	while(p){
		strcpy(s[n], p);
		n++;
		p = strtok(NULL, "=");
	}
	if(n == 2)
	{
		int b = atoi(s[1]);
		for(int i=0; i<strlen(s[0]); i++)
		{
			char str1[20],str2[20];
			strncpy(str1, s[0], i+1);
			int a1 = atoi(str1);
			int a2 = atoi(s[0]+i+1);
			if(a1+a2 == b)
			{
				cout<<a1<<"+"<<a2<<"="<<b;
				find = true;
				break;
			}
		}
	}
	else
	{
		cout<<"¸ñÊ½³ö´í£¡"<<endl; 
	}

	if(!find)
	{
		cout<<"Impossible!"<<endl;
	}
	return 0;
}

