#include<bits/stdc++.h>
using namespace std;
int n,r,ans=0,nt[10010],rt[10010]={0};
int main(){
    cin >> n >> r;
    for(int i=1;i<=n;i++) 
    {
    	cin>>nt[i];
	}
    sort(nt+1,nt+1+n); 
    for(int i=1;i<=n;i++){
        sort(rt+1,rt+1+r);
        rt[1]+=nt[i]; 
        ans+=rt[1];
    }
    cout << ans;
    return 0;
}
