#include<bits/stdc++.h>
using namespace std;
bool huiwen(int n,int d){
 
    string r = "",t = "0123456789ABCDEF";
 
    while(n != 0){
 
        r = t[n%d] + r;
 
        n = n / d;
 
    }
 
    string r2 = r;
 
    reverse(r2.begin(),r2.end());
 
    if(r == r2){
 
        return true;
 
    }else{
 
        return false;
 
    }
 
}
int main() {
 
    int n,x;
 
    cin>>n;
 
    for(int i = 1;i <= n;i++){
 
        cin>>x;
 
        if(huiwen(x,10)==false&&(huiwen(x,2)==true||huiwen(x,16))){
 
            cout<<x<<endl;
 
        }
 
    }
 
    return 0;
 
}
