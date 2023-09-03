#include<bits/stdc++.h>
using namespace std;
int n,m,ans;
int dx[8]= {0,0,1,-1,-1,-1,1,1},dy[8]= {1,-1,0,0,-1,1,1,-1};
char a[105][105];
int vis[105][105];
void dfs(int xx,int yy) {
    vis[xx][yy]=1;
    for(int i=0; i<8; i++) {
        int x=xx+dx[i],y=yy+dy[i];
        if(x>=0&&y>=0&&x<n&&y<m&&!vis[x][y]&&a[x][y]=='W') {
            dfs(x,y);
        }
    }
}
int main() {
    cin>>n>>m;
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(!vis[i][j]&&a[i][j]=='W') {
                ans++;
                dfs(i,j);
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}

