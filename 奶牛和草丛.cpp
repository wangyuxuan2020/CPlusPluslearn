#include<bits/stdc++.h>
using namespace std;
char a[100][100];
int n,m;
int ans=0;
int xx[]={0,1,0,-1},yy[]={1,0,-1,0};
void dfs(int x,int y){
	a[x][y]='.';
	for(int i=0;i<4;i++){
		int dx=xx[i]+x;
		int dy=yy[i]+y;
		if(dx>=0&&dy>=0&&dx<n&&dy<m&&a[dx][dy]=='#')
			dfs(dx,dy);
	} 
	return;
} 
int main(){
	while(cin>>n>>m){
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
				if(a[i][j]=='#'){
					dfs(i,j);
					ans++;
			}
		cout<<ans;
	}
	return 0;
} 
