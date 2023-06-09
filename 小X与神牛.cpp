#include<bits/stdc++.h> 
using namespace std;
 
int n, b, d, ans[20], num;
string s[1005];
 
int pow(int x, int nu){
	int res = 1;
	for (int i = 0; i < nu; i++) res *= x;
	return res;
}
 
void dfs(int len, string str){
	if(len == b){
		int f = 0;
		for (int i = 0; i < num; i++){
			int nu = 0;
			for (int j = 0; j < b; j++){
				if(s[i][j] != str[j]) nu++;
			}
			if(nu < d){f = 1; break;}
		}
		if(!f) s[num++] = str;
		return ;
	}
	for (int i = 0; i <= 1; i++) dfs(len + 1, str + (char)('0' + i));
}
 
int main()
{
 	scanf("%d %d %d", &n, &b, &d);
	for (int i = 1; i <= b; i++) s[0] += '0';
	num = 1;
	dfs(0, "");
	for (int i = 0; i < num; i++){
		int num = 0;
		for (int j = 0; j < b; j++){
			num += (s[i][j] - '0') * pow(2, b - j - 1);
		}
		ans[i] = num;
	}
	sort(ans, ans + num);
	for (int i = 0; i < n; i++) printf("%d ", ans[i]);
 
	return 0;
}

