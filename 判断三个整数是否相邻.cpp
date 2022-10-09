#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	if(a<b){
		swap(a,b);
	}
	if(b<c){
		swap(b,c); 
	}
	if(a<b){
		swap(a,b);
	}
	if(a-b==1&&b-c==1){
		cout<<"TRUE";
	}else{
		cout<<"FALSE";
	}
	return 0;
}

