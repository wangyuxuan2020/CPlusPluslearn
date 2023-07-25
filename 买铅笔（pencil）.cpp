#include<bits/stdc++.h>
using namespace std;
long n,a1,a2,b1,b2,c1,c2,p1,p2,p3,x[3];
int pen_money(int a1,int a2,int b1,int b2,int c1,int c2){
    while(p1<n){p1+=a1;x[0]+=a2;}
    while(p2<n){p2+=b1;x[1]+=b2;}
    while(p3<n){p3+=c1;x[2]+=c2;}
    return x[0],x[1],x[2];
}
int main(){
    cin>>n>>a1>>a2>>b1>>b2>>c1>>c2;
    pen_money(a1,a2,b1,b2,c1,c2);
    sort(x,x+3);
    cout<<x[0];
    return 0;
}
