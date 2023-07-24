#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
    int min=100000,t=0;
    for(int i=0;i<n;i++){
        if(min>a[i])
        {
            min=a[i];
        }
        t=t+min;
        min=min+b[i];
    }
    cout<<t;
    return 0;
}
