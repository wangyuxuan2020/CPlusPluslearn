#include<bits/stdc++.h>
using namespace std;
int main()
{
	char f[30]={'\0'};
	char ab[30] = {'\0'};
	int a,b,c=0;
	bool can = false;	
	cin>>f;
	int i;
	for (i=0; f[i] != '='; i++) {
		ab[i] = f[i];
	}
	for (i++ ;i<strlen(f);i++) {
		c = c*10 + (f[i]-48);
	}
	for (int m = 1; m<strlen(ab); m++) {
		int n;
		a = 0,b = 0;
		for (n=0; n<m; n++) {
			a = a*10 + (ab[n] - 48);
		}
		for (; n<strlen(ab); n++) {
			b = b*10 + (ab[n] - 48);
		}
		if (a + b == c) {
			cout<<a<<'+'<<b<<'='<<c<<endl;
			can = true;
			break;
		}
	}
	
	if(can == false){
		cout<<"Impossible!"<<endl;
	}

	return 0;
}

