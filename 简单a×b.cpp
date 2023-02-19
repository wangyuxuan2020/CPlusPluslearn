#include<bits/stdc++.h>
using namespace std;
int main()
{
	char f[500]={'\0'};
	long a=0,b=0;
	gets(f);
	int i;
	for (i=0; f[i]!='*'; i++) {
		a = a*10 + (f[i]-48);
	}
	for (i++; f[i]!='='; i++) {
		b = b*10 + (f[i]-48);
	}
	cout<<a*b<<endl;
	return 0;
}

