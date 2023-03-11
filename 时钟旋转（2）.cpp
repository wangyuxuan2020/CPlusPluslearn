#include<bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {
	int m,h1,m1,h2,m2;
	
	scanf("%d:%d",&h1,&m1);
	scanf("%d:%d",&h2,&m2);
	m = h2*60 + m2 - m1 - h1*60;
	double dushu = m*1.0/(12*60)*360;
	cout<<fixed<<setprecision(1)<<dushu<<endl;
	
}

