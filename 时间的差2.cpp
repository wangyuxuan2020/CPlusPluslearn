#include<bits/stdc++.h>
using namespace std;
int co(char x){
	return x-48;
}
int main() {
	char a[20],b[20];
	int t1=0,t2=0;
	cin>>a;
	cin>>b;
	
	t1 = co(a[0])*10*60*60 + co(a[1])*60*60 + (co(a[3])*10 + co(a[4]))*60 + co(a[6])*10 + co(a[7]);
	t2 = co(b[0])*10*60*60 + co(b[1])*60*60 + (co(b[3])*10 + co(b[4]))*60 + co(b[6])*10 + co(b[7]);
	cout<<(t1-t2)<<endl;
}
